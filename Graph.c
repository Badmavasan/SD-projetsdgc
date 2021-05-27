/* Graph.c */

#include "Graph.h"


/* Reseau */
static void ajout_en_tete_graph_reseau(int terminal, int cap, struct liste_graph_reseau * T){
    struct maillon_graph_reseau * nouveau = (struct maillon_graph_reseau *) malloc(sizeof(struct maillon_graph_reseau));

    nouveau -> id = terminal;
    nouveau -> flot = 0;
    nouveau -> capacite = cap;
    nouveau -> next = T-> head;

    T -> head = nouveau;
}


static void imprimer_liste_graph_reseau(struct liste_graph_reseau L) {
    struct maillon_graph_reseau* M;
    M = L.head;

    while (M!=NIL_mr) {
        printf("id : %d flot: %d capacite: %d\n",M->id, M->flot,M->capacite);

        M = M->next;
    }
}


struct liste_graph_reseau * buildGraph(char * fichierDimacs, int * source, int * sink, int * nb_sommets, int * nb_arcs) {
    FILE * fptr = fopen(fichierDimacs, "r");

    int value;
    int from;
    int to;
    int cap;
    bool table_created;
    char currentline[1000];

    assert(fptr != NULL);
    struct liste_graph_reseau * tab;
    table_created = false;

        while (fgets(currentline, sizeof(currentline), fptr) != NULL) {
        char delim[] = " ";
        char * ptr = strtok(currentline,delim);

        if (strcmp(ptr, "p") == 0) {
            ptr = strtok(NULL, delim);
            * nb_sommets = atoi(ptr);

            ptr = strtok(NULL, delim);
            * nb_arcs = atoi(&ptr[0]);

            tab = (struct liste_graph_reseau *) malloc((* nb_sommets) * sizeof(struct liste_graph_reseau));

            for (int i = 0 ; i < (* nb_sommets) ; i ++) {
                tab[i].id = i + 1;
                tab[i].head = NIL_mr;
            }

            table_created = true;
        }
        if (strcmp(ptr, "n") == 0) {
            ptr = strtok(NULL, delim);
            value = atoi(ptr);

            ptr = strtok(NULL, delim);
            if (strcmp(ptr, "s\n") == 0) { // utilisation de strtok coupe la ligne suivante aussi c est pour ca qu'on est obligé d'inclure \n aussi
                * source = value;
            }
            else if (strcmp(ptr, "t\n") == 0) {
                * sink = value;
            }
        }

        if (strcmp(ptr, "a") == 0 && table_created) {
            ptr = strtok(NULL, delim);
            from = atoi(ptr);

            ptr = strtok(NULL, delim);
            to = atoi(ptr);

            ptr = strtok(NULL, delim);
            cap = atoi(&ptr[0]);

            ajout_en_tete_graph_reseau(to, cap, &tab[from - 1]); /* HYPOTHESE DE DEPART */
        }
    }

    fclose(fptr);

    return tab;
}


void imprimer_graph_reseau(struct liste_graph_reseau * tabReseau, int nb_sommets) {
    printf("Graphe Réseau :\n");

    for (int i = 0 ; i < nb_sommets ; i ++) {
        printf("sommet : %d\n",i + 1); /* HYPOTHESE DE DEPART*/

        imprimer_liste_graph_reseau(tabReseau[i]);
    }

    printf("\n\n");
}

int minCapa(struct liste_chemin * LC) {
    int min;

    struct maillon_chemin * parcours;
    parcours = LC -> head -> next;

    if (parcours == NIL_mc) {
        return -1; // si la liste est vide
    }
    else {
        min = parcours -> capacite_residual;
        parcours = parcours -> next;

        while (parcours != NIL_mc) {
            if (parcours -> capacite_residual < min && parcours -> capacite_residual != -1) {
                min = parcours -> capacite_residual;
            }

            parcours = parcours -> next;
        }
    }

    return min;
}


static int getCapacity(int initial, int terminal, struct liste_graph_ecart * tabEcart) {
    struct maillon_graph_ecart * parcours;
    parcours = tabEcart[initial - 1].head; /*HYPOTHESE DE DEPART*/

    while (parcours != NIL_mge && parcours -> id != terminal) {
        parcours = parcours -> next;
    }

    if (parcours == NIL_mge) {
        return -  1;
    }
    else {
        return parcours -> flot_entrant;
    }
}


static int getFlotFromGraphEc(int initial, int terminal, struct liste_graph_ecart * tabEcart) {
    struct maillon_graph_ecart * M = tabEcart[terminal - 1].head;

    while (M != NIL_mge && M -> id != initial) {
        M = M -> next;
    }

    if (M != NIL_mge) {
        return M -> flot_entrant;
    }
    else {
        return 0;
    }
}


void updateFlowInNet(struct liste_graph_reseau * tabReseau, struct liste_graph_ecart * tabEcart, int nb_sommets) {
    struct maillon_graph_reseau * M;
    for (int i = 0 ; i < nb_sommets ; i ++) {
        M = tabReseau[i].head;

        while (M != NIL_mr) {
            M -> flot = getFlotFromGraphEc(i + 1, M -> id, tabEcart);
            M = M -> next;
        }
    }
}


/* GrapheEcart */
static void init_liste_graph_ecart(struct liste_graph_ecart * liste, int valeur_id_sommet_init) {
    liste -> head = NIL_mge;
    liste -> id = valeur_id_sommet_init;
}


static void ajout_en_tete_graph_ecart(struct liste_graph_ecart * liste, int valeur_id_sommet_courant, int valeur_flot_sommet_courant) {
    struct maillon_graph_ecart * M = (struct maillon_graph_ecart *) malloc(sizeof(struct maillon_graph_ecart));
    M -> id = valeur_id_sommet_courant;
    M -> flot_entrant = valeur_flot_sommet_courant;
    M -> next = liste -> head;
    liste -> head = M;
}


static void retirer_de_la_liste(struct liste_graph_ecart * liste, int id_sommet_a_retirer) {
    struct maillon_graph_ecart * M;
    M = liste -> head;

    struct maillon_graph_ecart * M_succ;
    M_succ = M -> next;

    if (M -> id == id_sommet_a_retirer) {
        liste -> head = M -> next;

        free(M);
    }

    else {
        while (M_succ != NIL_mge && M_succ -> id != id_sommet_a_retirer) {
            M = M_succ;
            M_succ = M_succ -> next;
        }

        if (M_succ != NIL_mge) {
            struct maillon_graph_ecart * M_ret = M_succ;
            M_succ = M_succ -> next;
            M -> next = M_succ;

            free(M_ret);
        }
    }
}


void clear_liste_graph_ecart(struct liste_graph_ecart * tabEcart, int nb_sommets) {
    for (int i = 0 ; i < nb_sommets ; i ++) {
        struct maillon_graph_ecart * parcours = tabEcart[i].head;

        while (parcours != NIL_mge) {
            tabEcart[i].head = parcours -> next;

            free(parcours);

            parcours = tabEcart[i].head;
        }
    }

    free(tabEcart);
}

void clear_liste_graph_reseau(struct liste_graph_reseau * tabReseau, int nb_sommets) {
    for (int i = 0 ; i < nb_sommets ; i ++) {
        struct maillon_graph_reseau * parcours = tabReseau[i].head;

        while (parcours != NIL_mr) {
            tabReseau[i].head = parcours -> next;

            free(parcours);

            parcours = tabReseau[i].head;
        }
    }

    free(tabReseau);
}


struct liste_graph_ecart * buildRG(struct liste_graph_reseau * tabReseau, int nb_sommets) {
    struct liste_graph_ecart * tabEcart = (struct liste_graph_ecart *) malloc((nb_sommets) * sizeof(struct liste_graph_ecart));
    for (int i = 0 ; i < nb_sommets ; i += 1) {
        init_liste_graph_ecart(&tabEcart[i], i + 1);

        struct maillon_graph_reseau * M_r = tabReseau[i].head;

        while (M_r != NIL_mr) {
            if (M_r -> capacite - M_r -> flot != 0) {
                ajout_en_tete_graph_ecart(&tabEcart[i], M_r -> id, M_r -> capacite);
            }

            M_r = M_r -> next;
        }
    }

    return tabEcart;
}


static void imprimer_liste_graph_ecart(struct liste_graph_ecart liste) {
    struct maillon_graph_ecart * parcours = liste.head;

    while (parcours != NIL_mge) {
        printf("id: %d\tflot_entrant:%d\n",parcours->id,parcours->flot_entrant);

        parcours = parcours->next;
    }
}


void imprimer_graph_ecart(struct liste_graph_ecart * tabEcart,int nb_sommets){
    printf("Graphe Écart : \n");

    for (int i = 0 ; i < nb_sommets ; i ++) {
        printf("Sommet : %d\n", i + 1);

        imprimer_liste_graph_ecart(tabEcart[i]);
    }

    printf("\n\n");
}


void updateFlowInRG(struct liste_chemin * chemin, struct liste_graph_ecart * tabEcart, int min) {
    int id_sommet = chemin -> head -> id;
    struct maillon_chemin * M_c  = chemin -> head -> next;
    struct maillon_graph_ecart * M_ge;

    while (M_c != NIL_mc) {
        M_ge = tabEcart[id_sommet - 1].head;

        while (M_ge != NIL_mge && M_ge -> id != M_c -> id) {
            M_ge = M_ge -> next;
        }

        if (M_ge->flot_entrant - min == 0) {
            retirer_de_la_liste(&tabEcart[id_sommet - 1], M_c -> id);
        }
        else {
            M_ge -> flot_entrant -= min;
        }

        int sommet_flot_a_repousser = M_c -> id;

        M_ge = tabEcart[sommet_flot_a_repousser - 1].head;

        while (M_ge != NIL_mge && M_ge->id != id_sommet) {
            M_ge = M_ge -> next;
        }

        if (M_ge == NIL_mge) {
            ajout_en_tete_graph_ecart(&tabEcart[sommet_flot_a_repousser - 1], id_sommet, min);
        }
        else {
            M_ge -> flot_entrant += min;
        }

        id_sommet = M_c -> id;
        M_c = M_c -> next;
    }
}


/* Chemin */
struct liste_chemin * init_liste_chemin() {
    struct liste_chemin * liste_chemin = (struct liste_chemin *) malloc(sizeof(struct liste_chemin));
    liste_chemin -> head = NIL_mc;
    return liste_chemin;
}


static bool enfiler_successeurs (struct liste_graph_ecart * tabEcart, struct file * file_f, int sommet_source, int predecesseurs[], int sink) {
    struct maillon_graph_ecart * parcours = tabEcart[sommet_source - 1].head;
    bool flag = false;

    while (parcours != NIL_mge) {
        if (predecesseurs[parcours -> id - 1] == 0) {
            enfiler(file_f, parcours -> id);
            predecesseurs[parcours -> id - 1] = sommet_source;
        }

        if (predecesseurs[sink - 1] != 0) {
            flag = true;
        }

        parcours = parcours -> next;
    }

    return flag;
}


static void ajout_en_tete_chemin(struct liste_chemin * liste_chemin, int valeur_id_sommet_courant, int capRes) {
    struct maillon_chemin * M = (struct maillon_chemin *) malloc(sizeof(struct maillon_chemin));

    M -> id = valeur_id_sommet_courant;
    M -> capacite_residual = capRes;
    M -> next = liste_chemin -> head;

    liste_chemin -> head = M;
}


struct liste_chemin * shortestPath(struct liste_graph_ecart * tabEcart, int source, int sink, int nb_sommets, bool * fini) {
    struct liste_chemin * plus_court_chemin = init_liste_chemin();
    int predecesseurs[nb_sommets];

    for (int i = 0 ; i < nb_sommets ; i += 1) {
        predecesseurs[i] = 0;
    }

    predecesseurs[source - 1] = source;

    struct file * file_f = init_file(nb_sommets);
    enfiler(file_f, source);

    * fini = false;
    int sommet;

    sommet = defiler(file_f);

    while (!(* fini) && sommet != -1) {
        * fini = enfiler_successeurs (tabEcart, file_f, sommet, predecesseurs, sink);
        sommet = defiler(file_f);
    }

    if (predecesseurs[sink - 1] != 0) {
        ajout_en_tete_chemin(plus_court_chemin, sink, getCapacity(predecesseurs[sink - 1], sink, tabEcart));

        int prec = predecesseurs[sink - 1];

        while (prec != predecesseurs[prec - 1]) {
            ajout_en_tete_chemin(plus_court_chemin, prec, getCapacity(predecesseurs[prec - 1], prec, tabEcart));

            prec = predecesseurs[prec - 1];
        }
    }

    ajout_en_tete_chemin(plus_court_chemin, source, -1);

    clear_file(file_f);

    return plus_court_chemin;
}


void imprimer_chemin(struct liste_chemin * LC){
    struct maillon_chemin * M = LC -> head;

    printf("Chemin : \n");

    while (M != NIL_mc) {
        printf("id : %d capacite : %d\t", M -> id, M -> capacite_residual);

        M = M -> next;
    }

    printf("\n\n");
}


void clear_chemin(struct liste_chemin * liste_chemin) {
    struct maillon_chemin * parcours = liste_chemin -> head;

    while (parcours != NIL_mc) {
        liste_chemin -> head = parcours -> next;

        free(parcours);

        parcours = liste_chemin -> head;
    }

    free(liste_chemin);
}


void renderResult(char * fichier_render, struct liste_graph_reseau * tabReseau, int nb_sommets, int nb_arcs, int source, int sink, int flot) { /* Dans un graph de réseau les arcs restent les memes seul leur flot change */
    FILE *fptr = fopen(fichier_render, "w");

    fprintf(fptr, "c Pb de flot max\n");

    fprintf(fptr, "c pb lines (nodes, links)\n");
    fprintf(fptr, "p %d %d\n", nb_sommets, nb_arcs);

    fprintf(fptr, "c source\n");
    fprintf(fptr, "n %d s\n", source);

    fprintf(fptr, "c sink\n");
    fprintf(fptr, "n %d t\n", sink);

    fprintf(fptr, "c arc (from, to, capa, flot)\n");
    for (int i = 0 ; i < nb_sommets ; i ++) {
        struct maillon_graph_reseau * parcours = tabReseau[i].head;

        while (parcours != NIL_mr) {
            fprintf(fptr, "a %d %d %d %d\n", tabReseau[i].id, parcours -> id, parcours -> capacite, parcours -> flot);

            parcours = parcours -> next;
        }
    }

    fprintf(fptr, "c flot maximum\n");
    fprintf(fptr, "s %d\n", flot); /*s : solution*/

    fclose(fptr);
}
