/* file.c */

#include "file.h"

void init_file (struct file* F, int taille)
{
    F->taille = taille;
    int tab [taille];
    F->tab = tab;
    F->write_end = 0;
    F->read_end =0;
    F->n = 0;
}

void clear_file (struct* file)
{
    
}

void enfiler(struct file* F, int sommet_a_enfiler)
{
    if(F->n < F.taille){
        F->tab[F->write_end] = sommet_a_enfiler;
        F->n ++;
        F->write_end = (F->write_end + 1) % F->taille;
    }
}


int defiler (struct file* F)
{
    int sommet = -1;
    if(F->n > 0){
        sommet = F->read_end;
        F->n --;
        F->read_end = (F->read_end + 1) % F->taille;
    }
    return sommet;
}
