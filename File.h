/* File.h */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>


/**************************************************
 * IMPLANTATION
 *
 * Spécification de l'implantation
 *
 * Implantation de file :
 *
 * On fait pas d'allocution dynamique mais une allocution fixe du tableau de file
 *
 * init_file creer un tableau de de taille donne
 * n nombre d'élements dans la file
 * on a un tableau int comme les informations stockée sont numéro (numéro de sommet) cf: HYPOTHESE GraphReseau.h
 */

struct file {
    int* tab;
    int taille;
    int read_end;
    int write_end;
    int n;
};

/* Constructeur. Initialise à la file vide */
extern struct file* init_file (int);

extern void clear_file (struct file*);

extern void enfiler (struct file*, int);

extern int defiler (struct file*);

extern void print_file(struct file*);
