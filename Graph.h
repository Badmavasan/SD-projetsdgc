/* Graphe.c */

#include "GraphReseau.h"
#include "GraphEcart.h"
#include "Chemin.h"
#include <stdio.h>
#include <stdlib.h>

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

extern void buildGraph(FILE fichierDimacs, tabSommetsGR T, int* source, int* sink, int* n);

/*
 * Résultat final: le résult final sera rendu par une façon modifié de fichier DIIMACS (cf: Rapport d'analyse Partie Génération du fichier résultat)
 * @param1 : un fichier type File est pris en paramtere sur lequel les résultats seront stockées 
 * @param2 : tabSommetsGR (un graph du réseau)
 */

extern void renderResult(FILE result, tabSommetsGR T);



/*--------------------------------------------------------------------*/
/* --------------------------- GraphEcart --------------------------- */
/*--------------------------------------------------------------------*/

extern void init_liste_graph_ecart(liste_graph_ecart liste, int valeur_id_sommet_init);

/*            ----------------------------------------------            */

extern void ajout_en_tete_graph_ecart(liste_graph_ecart liste, int valeur_id_sommet_courant, int valeur_flot_sommet_courant);

/*            ----------------------------------------------            */

extern void retirer_de_la_liste(liste_graph_ecart liste, int id_sommet_a_retirer);

/*            ----------------------------------------------            */

extern void clear_liste_graph_ecart(liste_graph_ecart liste, int valeur_id_sommet_init);

/*            ----------------------------------------------            */

extern void buildRG(tabSommetsGR reseau, int n, tabSommetsGE graph_ecart);

/*            ----------------------------------------------            */

extern void updateFlowInRG(Chemin chemin, int k, tabSommetsGE graph_ecart);



/*--------------------------------------------------------------------*/
/* --------------------------- Chemin --------------------------- */
/*--------------------------------------------------------------------*/

extern void shortestPath(tabSommetsGE graphe_ecart, int source, int sink, int n, tabSommetsC plus_court_chemin);

/*            ----------------------------------------------            */

extern void init_liste_chemin(tabSommetsC liste_chemin, int valeur_id_sommet_init);

/*            ----------------------------------------------            */

extern void ajout_en_tete_chemin(tabSommetsC liste_chemin, int valeur_id_sommet_courant);



