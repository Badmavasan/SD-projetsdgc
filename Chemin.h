/* Chemin.h */

#include "File.h"
#define NIL_lc (struct liste_chemin *) 0
#define NIL_mc (struct maillon_chemin *) 0


struct maillon_chemin {        // Maillon source
    int id;                    // id = sommet_source
    int capacite_residual;     // capacite_residual = -1
    struct maillon_chemin * next;
};


struct liste_chemin {
    struct maillon_chemin * head;
};
