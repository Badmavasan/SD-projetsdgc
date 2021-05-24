/* Dinic.c */

#include "Dinic.h"

void dinic (struct liste_graph_reseau* tabReseau,int* flot,int source,int sink,int nb_sommets){
  /* Initialisation */
  struct liste_graph_ecart* tabEcart = buildRG(tabReseau,nb_sommets);
  imprimer_graph_ecart(tabEcart,nb_sommets);
  struct liste_chemin* plus_court_chemin;
  int min;
  /*Programme*/
  bool fini;
  plus_court_chemin = shortestPath(tabEcart,source,sink,nb_sommets,&fini);
  imprimer_chemin(plus_court_chemin);
  while(fini){
    min = minCapa(plus_court_chemin);
    updateFlowInRG(plus_court_chemin,tabEcart,min);
    imprimer_graph_ecart(tabEcart,nb_sommets);
  printf("\n\n");

    *flot+= min;
    plus_court_chemin = shortestPath(tabEcart,source,sink,nb_sommets,&fini);
    imprimer_chemin(plus_court_chemin);
  }
}
