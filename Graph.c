/* Graph.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include "Graph.h"


void ajout_en_tete_graph_reseau (int terminal, int cap, struct liste_graph_reseau* L){
    struct maillon_graph_reseau * nouveau = (struct maillon_graph_reseau *) malloc(sizeof(struct maillon_graph_reseau));
    nouveau->id = terminal;
    nouveau->flot = 0;
    nouveau->capacite = cap;
    nouveau->next = L->head;
    L->head = nouveau;
}

void init_liste_graph_reseau(struct liste_graph_reseau *L, int id){
    L->id = id;
    L->head = (struct maillon_graph_reseau*)0;
}

void imprimer_liste_graph_reseau (struct liste_graph_reseau L)
{   struct maillon_graph_reseau* M;
    M = L.head;
    while(M!=NIL_mr)
    {   
        printf("id : %d flot: %d capacite: %d\n",M->id, M->flot,M->capacite);
        M = M->next;
    }
}

void imprimer_graph(struct liste_graph_reseau* T, int n){
    for(int i=0;i<n;i++){
        imprimer_liste_graph_reseau(T[i]);
    }
}

int get_nb_sommets_from_file(char* fichierDimacs){
    char currentline[1000];
    int nb_sommets;
    bool found = false;
    FILE *fptr = fopen(fichierDimacs, "r");
    while(found==false && fgets(currentline,sizeof(currentline), fptr) != NULL){
        char delim[] = " ";
        char* ptr = strtok(currentline,delim);
        
        if(strcmp(ptr,"p")==0){
            ptr = strtok(NULL,delim);
            nb_sommets = atoi(ptr);
            found = true;
        }
    }
    fclose(fptr);
    return nb_sommets;
}

void buildGraph(char* fichierDimacs, int* source, int* sink, struct list_graph_reseau * tab)
{
    char currentline[1000];
    FILE *fptr = fopen(fichierDimacs, "r");
    int value;
    int from;
    int to;
    int cap;
    assert(fptr != NULL);
    
    while(fgets(currentline,sizeof(currentline), fptr) != NULL){
        char delim[] = " ";
        char* ptr = strtok(currentline,delim);
        
        if(strcmp(ptr,"n")==0){
            ptr = strtok(NULL,delim);
            value = atoi(ptr);            
            ptr = strtok(NULL,delim);
            if(strcmp(ptr,"s\n")==0){ // utilisation de strtok coupe la ligne suivante aussi c est pour ca qu'on est obligé d'inclure \n aussi 
                *source = value;
            }else if(strcmp(ptr,"t\n")==0){
                *sink = value;
            }
        }
        if(strcmp(ptr,"a")==0){
            ptr = strtok(NULL,delim);
            from = atoi(ptr);
            ptr = strtok(NULL,delim);
            to = atoi(ptr);
            ptr = strtok(NULL,delim);
            cap = atoi(&ptr[0]);
            //ajout_en_tete_graph_reseau(to,cap,&tab[from -1]); /* HYPOTHESE DE DEPART */
        }
    }
//     printf("source : %d\n",source);
//     printf("sink : %d\n",sink);
//     printf("nb de sommets : %d\n",nb_sommets);
//     printf("nb d'arcs : %d\n",nb_arcs);
    
    
    fclose(fptr);
}


int minCapa (struct liste_chemin* LC)
{
    struct maillon_chemin* M;
    int min;
    
    parcours = chemin->head;
    if(parcours == NIL_mc){
        return -1; // si la liste est vide 
    }
    else{
        min = parcours->capacite_residual;
        parcours = parcours->next;
        while(parcours != NIL_mc){
            if(parcours->capacite_residual<min){
                min = parcours->capacite_residual;
            }
            parcours = parcours->next;
        }
    }
    return min;
}

int getCapacityById(int initial, int terminal, tabSommetsGR* GR)
{
    struct maillon_reseau* M;
    M = GR[initial -1]->head;
    while(M!=NIL_mr && M->id != terminal)
    {
        M = m->next;
    }
    if(M==NIL_mr)
    {
        return -1;
    }
    else
    {
        return M->capacite;
    }
}

void updateFlowInNet(tabSommetsGR* GR, tabSommetsGE* GE,int n)
{
    struct maillon_reseau* M;
    for(int i=0; i<n ;i++)
    {
        M = GR[i]->head;
        
        while(M!=NIL_mr)
        {
            M->flot = getFlotFromGraphEc(i,M->id,GE);
        }
    }
}


int getFlotFromGraphEc(int initial, int terminal, tabSommetsGE T )
{
    struct maillon_grpah_reseau * M = (struct maillon_graph_reseau *) malloc(sizeof(struct maillon_graph_reseau));
    M = T[terminal - 1]->head;
    while(M!=NIL_mge && M->id != initial)
    {
        M = M->next;
    }
    if(M!=NIL_mge){
        return M->flot_entrant;
    }
    else{
        retourner 0;
    }
}


/* GrapheEcart */
void init_liste_graph_ecart(liste_graph_ecart * liste, int valeur_id_sommet_init) {
    liste -> head = NIL_mge;
    liste -> id = valeur_id_sommet_init;
}

void ajout_en_tete_graph_ecart(liste_graph_ecart * liste, int valeur_id_sommet_courant, int valeur_flot_sommet_courant) {
    struct maillon_graph_ecart * M = (struct maillon_graph_ecart *) malloc(sizeof(struct maillon_graph_ecart));
    M -> id = valeur_id_sommet_courant;
    M -> flot_entrant = valeur_flot_sommet_courant;
    M -> next = liste -> head;
    liste -> head = M;
}

void retirer_de_la_liste(liste_graph_ecart * liste, int id_sommet_a_retirer) { // free le maillon retiré
    struct maillon_graph_ecart * M;
    struct maillon_graph_ecart * M_succ;
    M = L -> head;
    M_succ = M -> next;
    while (M_succ != NIL_mge && M_succ != id_sommet_a_retirer) {
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

void clear_liste_graph_ecart(liste_graph_ecart liste, int valeur_id_sommet_init) {
    struct maillon_graph_ecart * M;
    struct maillon_graph_ecart * M_succ;
    M = L -> head;
    M_succ = M -> next;
    while (M_succ != NIL_mge) {
        free(M);
        M = M_succ;
        M_succ = M_succ -> next;
    }
    free(M);
}

void buildRG(tabSommetsGR reseau, int n, tabSommetsGE graph_ecart) {
    for (int i = 0 ; i < n ; i += 1) {
        init_liste_graph_ecart(tabSommetsGE[i], i + 1);
        struct maillon_graph_reseau * M_r = tabSommetsGR[i] -> head;
        while (M_r != NIL_mr) {
            if (M_r -> capacite - M_r -> flot) {
                ajout_en_tete_graph_ecart(tabSommetsGE[i], M_r -> id, M_r -> capacite);
            }
            M_r = M_r -> next;
        }
    }
}

void updateFlowInRG(Chemin chemin, int k, tabSommetsGE graph_ecart) {
    int id_sommet = chemin -> head -> id;
    struct maillon_chemin M_c * = chemin -> head -> next;
    struct maillon_graph_ecart M_ge *;
    while (M_c != NIL_mc) {
        M_ge = tabSommetsGE[id_sommet - 1] -> head;
        while (M_ge != NIL_mge && M_ge -> id != M_c) {
            M_c = M_c -> next;
        }
        if (M_c -> capacite_residual - k = 0) {
            retirer_de_la_liste(tabSommetsGE[id_sommet - 1, M_c -> id]);
        }
        else {
            M_c -> capacite_residual -= k;
        }
        
        int sommet_flot_a_repousser = M_c -> id;
        M_ge = tabSommetsGE[sommet_flot_a_repousser - 1] -> head;
        while (M_ge != NIL_mge && M_ge != sommet_flot_a_repousser) {
            M_ge = M_ge -> next;
        }
        if (M_ge == NIL_mge) {
            ajout_en_tete_graph_ecart(tabSommetsGE[sommet_flot_a_repousser - 1], id_sommet, k);
        }
        else {
            M_ge -> flot_entrant += k;
        }
        id_sommet = M_c -> id;
        M_c = M_c -> next;
    }
}

/* Chemin */

void shortestPath(tabSommetsGE graph_ecart, int source, int sink, int n, tabSommetsC plus_court_chemin) {
    init_liste_chemin(plus_court_chemin, source);
    int predecesseurs[n];
    for (int i = 0 ; i < n ; i += 1) {
        predecesseurs[i] = 0;
    }
    predecesseurs[source - 1] = source;
    struct file * file_f;
    init_file(file_f, n);
    enfiler(file_f, source);
    fini = 0;
    int sommet;
    while (!fini) {
        sommet = defiler(file_f);
        fini = int enfiler_successeurs (graph_ecart, file_f, sommet, sink, predecesseurs, n);
    }
    
    sommet = sink;
    ajout_en_tete_chemin(plus_court_chemin, sommet);
    int prec = predecesseurs[sommet - 1];
    
    while (prec != predecesseurs[prec - 1]) {
        ajout_en_tete_chemin(plus_court_chemin, prec);
        prec = predecesseurs[prec - 1];
    }
}

void init_liste_chemin(tabSommetsC liste_chemin, int valeur_id_sommet_init) {
    liste_chemin -> id = valeur_id_sommet_courant;
    liste_chemin -> head = NIL_lc;
}

/*            --------------------------------------------            */

void ajout_en_tete_chemin(tabSommetsC * liste_chemin, int valeur_id_sommet_courant) {
    struct maillon_chemin * M = (struct maillon_chemin *) malloc(sizeof(struct maillon_chemin));
    M -> id = valeur_id_sommet_courant;
    M -> next = liste_chemin -> head;
    liste_chemin -> head = M;
}

