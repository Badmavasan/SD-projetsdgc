/* GrapheEcart.h */

#include "Chemin.h"
#include "GraphReseau.h"
#define N 10
#define NIL_lge (struct liste_graph_ecart *) 0
#define NIL_mge (struct maillon_graph_ecart *) 0

struct maillon_graph_ecart {
    int id;
    int flot_entrant;
    struct maillon_graph_ecart* next;
};

struct liste_graph_ecart {
    int id;
    struct maillon_graph_ecart* head;
};

typedef tabSommetsGE liste_graph_ecart[N];



void init_liste_graph_ecart(liste_graph_ecart liste, int valeur_id_sommet_init);

void ajout_en_tete_graph_ecart(liste_graph_ecart liste, int valeur_id_sommet_courant, int valeur_flot_sommet_courant);

void retirer_de_la_liste(liste_graph_ecart liste, int id_sommet_a_retirer);

void clear_liste_graph_ecart(liste_graph_ecart liste, int valeur_id_sommet_init);

void buildRG(tabSommetsGR reseau, int n, tabSommetsGE graph_ecart);

void updateFlowInRG(Chemin chemin, int k, tabSommetsGE graph_ecart);

