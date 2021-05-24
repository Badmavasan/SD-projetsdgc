/* Chemin.h */

#include "File.h"
#define NIL_lc (struct liste_chemin *) 0
#define NIL_mc (struct maillon_chemin *) 0


struct maillon_chemin {
    int id;
    int capacite_residual;
    struct maillon_chemin * next;
};

/* Maillon source
 * id = sommet_source
 * capacite_residual = -1
 */

struct liste_chemin {
    struct maillon_chemin * head;
};
