/* GraphReseau.h */

/*********************************************************************************************
 * HYPOTHESE DE DEPART
 * 
 * Tous les noms de sommets sont des numéros allant de 1 jusqu'à n (n soit le nombre de sommets)
 * 
 * *******************************************************************************************/

/*********************************************************************************************
 * IMPLANTATION
 * 
 * Spécification de l'implantation
 * 
 * Implantation de Graph Réseau : 
 * 
 * Les maillons sont alloués dynamiquement. 
 * Le champ next du dernier maillon vaut (struct maillon_double*)0
 * 
 * Le champ tete d'une liste pointe vers le premier maillon
 * La liste vide est codée par (tete, nbelem) = ((struct maillon_double*)0, 0)
 *
 * Des listes distinctes ont des maillons distincts (pas de maillon partagé).
 * 
 * Un graph de réseau est un tableau de taille n ( nombre de sommets ) de liste chainée
 * Chaque liste correspond à tous les arcs lié à un sommet
 * Identifiant de liste correspond au nom du sommet et les maillons contient les informations
 * de sommet de l'arrivé de l'arc, la capacité et flot 
 *********************************************************************************************/

struct maillon_graph_reseau {
    int id;
    int flot;
    int capacite;
    struct maillon_graph_reseau* next;
};

struct liste_graph_reseau {
    int id;
    struct maillon_graph_reseau* head;
};

typedef tabSommetsGR liste_graph_reseau[N];

/**********************************************************************
 * PROTOTYPES DES FONCTIONS (TYPE ABSTRAIT)
 **********************************************************************/

/* 
 * Intialiser le graph réseau à partir du fichier DIMACS
 * @param1 : le fichier DIMACS
 * @param2 : un tableau de liste chainée de dimension N (qui sera redimensionner à la fin de lecture du fichier DIMACS)
 * @param3 : on récupere la source du graph de réseau, on utilise un int car le graph est numéroté (ref: HYOPTHESE)
 * @param4 : on récupere la fin du graph de réseau, on utiliser un int car le graph est numéroté (ref: HYPOTHESE)
 * @param5 : on récupere le nombre de sommets 
 * le param3, param4 et param5 sont récupérer pour etre utiliser dans la fonction principale de dinic 
 */

extern void buildGraph(FILE fichierDimacs, tabSommetsGR T, int* source, int* sink, int* n);

/*
 * Résultat final: le résult final sera rendu par une façon modifié de fichier DIIMACS (cf: Rapport d'analyse Partie Génération du fichier résultat)
 * @param1 : un fichier type File est pris en paramtere sur lequel les résultats seront stockées 
 * @param2 : tabSommetsGR (un graph du réseau)
 */

extern void renderResult(FILE result, tabSommetsGR T);
