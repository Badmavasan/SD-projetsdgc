/* file.h */

#include <stdio.h>

#define N 10

/**************************************************
 * IMPLANTATION
 * 
 * Spécification de l'implantation
 * 
 * Implantation de file :
 * 
 * On fait pas d'allocution dynamique mais une allocution fixe du tableau de file
 * 
 * init_file creer un tableau de de taille donne (redimensionne de DEFAULT 10 à taille)
 * n nombre d'élements dans la file 
 * on a un tableau int comme les informations stockée sont numéro (numéro de sommet) cf: HYPOTHESE GraphReseau.h 
 */

struct file {
    int Tab [N];
    int taille;
    int read_end;
    int write_end;
    int n; 
};

#include <stdbool.h>

/* Constructeur. Initialise à la file vide */
extern void init_file (struct file*);

extern void clear_file (struct file*);

extern void enfiler (struct file*, int);

extern double defiler (struct file*);

extern bool est_vide_file (struct file*);
