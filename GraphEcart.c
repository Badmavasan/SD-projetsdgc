/* GrapheEcart.h */


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
    struct maillon_chemin M_c = chemin -> head -> next;
//     struct maillon_graph_ecart M_ge;
    while (M_c != NIL_mc) {
        
    }
    
}

