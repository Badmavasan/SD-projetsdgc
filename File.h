/* File.h */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>


/*******************************************************************************************
 * IMPLANTATION
 *
 * Spécification de l'implantation
 *
 * Implantation de file :
 *
 *
 *
 * init_file
 * n nombre d'élements dans la file
 * on a un tableau int comme les informations stockée sont numéro (numéro de sommet) cf: HYPOTHESE GraphReseau.h
 *********************************************************************************************/

struct file {
    int * tab;
    int taille;
    int read_end;
    int write_end;
    int n;
};

/* Constructeur: Initialise à la file vide de taille donne (cette fonction fait de l'allocution dynamique)
 * @param1 : la taille de file à initialiser
 * @return : l'adresse de file est retourné
 */
extern struct file * init_file(int);

extern void clear_file(struct file *);

extern void enfiler(struct file *, int);

extern int defiler(struct file *);

extern void print_file(struct file *);
