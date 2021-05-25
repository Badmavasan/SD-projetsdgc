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
 * @param2 : on récupere la source du graph de réseau, on utilise un int car le graph est numéroté (ref: HYOPTHESE)
 * @param3 : on récupere la fin du graph de réseau, on utiliser un int car le graph est numéroté (ref: HYPOTHESE)
 * @param4 : on récupere le nombre de sommets
 * @param5 : on récupere le nombre d'acrs 
 * @return : pointeur vers un tableau de liste chainée de dimension nb_sommets alloué dynamiquement
 * les param2, param3, param4 et param5 sont récupérer pour etre utiliser dans la fonction principale de dinic
 */
/*            ----------------------------------------------            */
extern struct liste_graph_reseau* buildGraph(char*, int*, int*,int*,int*);
/*            ----------------------------------------------            */

/*
 * Imprimer le graph réseau 
 * @param1 : le tableau de liste chainée de graph réseau est passé en paramétre 
 * @param2 : le nombre de sommets est passé en partamtre qui permet de parcourir le tableau de liste chainée
 * @return : void (Cette fonction fait que des impressions dans la console)
 * cette fonction n'était pas demandé mais on l'a fait pour debugging 
 */

/*            ----------------------------------------------            */
extern void imprimer_graph_reseau(struct liste_graph_reseau*, int);
/*            ----------------------------------------------            */

/*
 * Résultat final: le résult final sera rendu par une façon modifié de fichier DIIMACS (cf: Rapport d'analyse Partie Génération du fichier résultat)
 * @param1 : un fichier type File est pris en paramtere sur lequel les résultats seront stockées
 * @param2 : un tableau de liste chainée de graph réseau
 * @return : void : creer un fichier de result et imprime les résultats sur ce fichier
 */

/*            ----------------------------------------------            */
extern void renderResult(char*, struct liste_graph_reseau*,int,int,int,int,int);
/*            ----------------------------------------------            */

/*
 * Mise à jour de graph réseau, une fois qu'on a le graph d'écart final
 * On remplace les flots de graph de réseau en fonction des flots de graph d'écart
 * @param1 : un tableau de liste chainée de graph réseau
 * @param2 : un tableau de liste chainée de graph écart
 * @param3 : le nombre de sommets 
 * @return : void 
 */

/*            ----------------------------------------------            */
extern void updateFlowInNet(struct liste_graph_reseau*, struct liste_graph_ecart*,int);
/*            ----------------------------------------------            */

/*
 * On a fait une aloocution dynamique du tableau, de la liste chainée et les maillons de graph de réseau donc il faut liberer les espaces qu'on a alloué dyniqument
 * @param1
 */

/*            ----------------------------------------------            */
extern void clear_liste_graph_reseau(struct liste_graph_reseau*,int);
/*            ----------------------------------------------            */




/*--------------------------------------------------------------------*/
/* --------------------------- GraphEcart --------------------------- */
/*--------------------------------------------------------------------*/

extern struct liste_graph_ecart* buildRG(struct liste_graph_reseau*, int);

/*            ----------------------------------------------            */

extern void imprimer_graph_ecart(struct liste_graph_ecart*,int);

/*            ----------------------------------------------            */

extern  struct liste_chemin* shortestPath(struct liste_graph_ecart*,int, int, int,bool*);

/*            ----------------------------------------------            */

extern int minCapa (struct liste_chemin*);

/*            ----------------------------------------------            */

extern void clear_liste_graph_ecart(struct liste_graph_ecart*,int);

/*            ----------------------------------------------            */

extern void updateFlowInRG(struct liste_chemin*, struct liste_graph_ecart*, int);

/*            ----------------------------------------------            */




/*--------------------------------------------------------------------*/
/* --------------------------- Chemin --------------------------- */
/*--------------------------------------------------------------------*/

extern struct liste_chemin* init_liste_chemin();

/*            ----------------------------------------------            */

extern void imprimer_chemin(struct liste_chemin*);

/*            ----------------------------------------------            */

extern void clear_chemin(struct liste_chemin*);

/*            ----------------------------------------------            */
