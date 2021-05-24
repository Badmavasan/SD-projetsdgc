/* Graph.h */

#include "GraphReseau.h"
#include "GraphEcart.h"
#include "Chemin.h"

/*----------------------------------------------------------------------*/
/* --------------------------- GraphReseau ---------------------------- */
/*----------------------------------------------------------------------*/
/* 
 * Intialiser le graph réseau à partir du fichier DIMACS
 * @param1 : le fichier DIMACS
 * @param2 : un tableau de liste chainée de dimension N (qui sera redimensionner à la fin de lecture du fichier DIMACS)
 * @param3 : on récupere la source du graph de réseau, on utilise un int car le graph est numéroté (ref: HYOPTHESE)
 * @param4 : on récupere la fin du graph de réseau, on utiliser un int car le graph est numéroté (ref: HYPOTHESE)
 * @param5 : on récupere le nombre de sommets 
 * le param3, param4 et param5 sont récupérer pour etre utiliser dans la fonction principale de dinic 
 */

/*            ----------------------------------------------            */

extern struct liste_graph_reseau* buildGraph(char* fichierDimacs, int* source, int* sink,int* nb_sommets);

extern void imprimer_graph_reseau(struct liste_graph_reseau* tabReseau,int nb_sommets);

extern int minCapa (struct liste_chemin* LC);

extern struct liste_graph_ecart * buildRG(struct liste_graph_reseau* tabReseau, int nb_sommets);

extern void imprimer_graph_ecart(struct liste_graph_ecart* tabEcart,int nb_sommets);

extern void updateFlowInRG(struct liste_chemin* chemin, struct liste_graph_ecart* tabEcart, int min);

extern struct liste_chemin * init_liste_chemin();

extern struct liste_chemin* shortestPath(struct liste_graph_ecart* tabEcart, int source, int sink, int nb_sommets, bool* fini);

extern void imprimer_chemin(struct liste_chemin * LC);
