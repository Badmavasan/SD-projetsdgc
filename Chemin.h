/* Chemin.h */

#include <stdio.h>
#include <stdlib.h>

struct maillon_chemin {
    int id;
    int flot;
    struct maillon_chemin * next;
};


struct liste_chemin {
    int id;
    struct maillon_chemin * head;
};
