/* Chemin.h */

#include <stdio.h>
#include <stdlib.h>
#define NIL_lc (struct liste_chemin *) 0
#define NIL_mc (struct maillon_chemin *) 0


struct maillon_chemin {
    int id;
    int capacite_residual;
    struct maillon_chemin * next;
};


struct liste_chemin {
    int id;
    struct maillon_chemin * head;
};
