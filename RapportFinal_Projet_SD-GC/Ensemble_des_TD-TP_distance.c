____Exercice 1 : Ecrire un algorithme qui initialise un vecteur par lecture de ses valeurs au clavier.

Action initTableauClavier (tableau)
    D/R : tableau : vecteur
    L : i : Entier (compteur position tableau)
        val : Caractère (élément à insérer dans le tableau)
    
    Pour i allant de 0 à N-1 alors
        lire(val)
        tableau[i] <- val
    FinPour
FinAction
    --------------
    | CORRECTION |
    -------------------------------------------
    | Fonction init () : vecteur[N] de Entier |
    |     L : v : vecteur[N] de Entier        |
    |         i : Entier                      |
    |                                         |
    |     Pour i de 0 à N-1 Faire             |
    |         lire(v[i])                      |
    |     FPour                               |
    |     retourner(v)                        |
    | FFonction                               |
    -------------------------------------------
    | Action init (v)                         |
    |     R : v : vecteur[N] de Entier        |
    |     L : i : Entier                      |
    |                                         |
    |     Pour ...                            |
    -------------------------------------------

------------------------------------------------------------
____Exercice 2 : Ecrire un algorithme qui détermine le maximum dans un vecteur d'entiers donné.

Fonction maxTableau (tableau) : Entier
    D : tableau : vecteur
    L : i : Entier (compteur position tableau)
        max : Entier (plus grande valeur du tableau, à retourner)
    
    max <- tableau[0]
    Pour i allant de 1 à N-1 alors
        Si tableau[i] > max alors
            max <- tableau[i]
        FinSi
    FinPour
    retourner max
FinFonction
    --------------
    | CORRECTION |
    ------------------------------------
    | Fonction max (v) : Entier        |
    |     D : v : vecteur[N] de Entier |
    |     L : i, max : Entier          |
    |                                  |
    |     max <- v[0]                  |
    |     Pour i de 1 à N-1 Faire      |
    |         Si max < v[i] Alors      |
    |             max <- v[i]          |
    |         FSi                      |
    |     FPour                        |
    |     retourner(max)               |
    | FFonction                        |
    ------------------------------------

------------------------------------------------------------
____Exercice 3 : Ecrire un algorithme qui détermine le nombre d'occurrences d'un entier donné dans un vecteur d'entiers donné.

Fonction occurencesValTableau (tableau, val) : Entier
    D : tableau : vecteur[N] de Entier
        val : Entier (valeur dont on doit déterminer le nombre d'occurences)
    L : i : Entier (compteur position tableau)
        cpt : Entier (compteur du nombre d'occurences)
    
    cpt <- 0
    Pour i allant de 0 à N-1 alors
        Si tableau[i] = val alors
            cpt <- cpt + 1
        FinSi
    FinPour
    retourner cpt
FinFonction
    --------------
    | CORRECTION |
    ---------------------------------------
    | Fonction nbocc (v, nb) : Entier
    |         D : v : vecteur[N] de Entier
    |             nb : Entier
    |         L : i : Entier
    |         nbo : Entier
    |         
    |         nbo <- 0
    |         Pour i de 0 à N-1 Fiare
    |             Si v[i] = nb Alors
    |                 nbo <- nbo + 1
    |             FSi
    |         FPour
    |         retourner(nbo)
    |     FFonction
    ---------------------------------------        

------------------------------------------------------------
____Exercice 4 : Ecrire un algorithme qui détermine si un entier donné appartient à un vecteur d'entiers donné.


Fonction presenceValTableau (tableau, val) : Entier
    D : tableau : vecteur[N] de Entier
        val : Entier (valeur dont on doit déterminer la présence ou l'absence)
    L : i : Entier (compteur position tableau)
        trouve : boolean
    
    i <- 0
    trouve <- faux
    TantQue i < N && trouve = faux Faire
        Si tableau[i] = val alors
            trouve <- vrai
        Sinon
            i <- i + 1
        FinSi
    FinTantQue
    retourner trouve
FinFonction
    --------------
    | CORRECTION |
    ------------------------------------
    | Fonction


------------------------------------------------------------
____Exercice 5 : Ecrire un algorithme qui détermine si un entier donné appartient à un vecteur d'entiers trié donné.

Fonction presenceValTableau (tableau, val) : Entier
    D : tableau : vecteur
        val : Entier (valeur dont on doit déterminer la présence ou l'absence)
    L : i : Entier (compteur position tableau)
        valTab : Entier (valeur courente du tableau)
        trouve : boolean
    
    i <- 0
    trouve <- faux
    valTab <- tableau[0]
    TantQue i < N && valTab < val && trouve = faux faire
        Si tableau[i] = val alors
            trouve <- vrai
        FinSi
        i <- i + 1
    FinTantQue
    retourner trouve
FinFonction
    --------------
    | CORRECTION |
    ---------------------------------------
    | Fonction nbocc (v, nb) : Entier
    |         D : 

------------------------------------------------------------
____Exercice 6 : Ecrire un algorithme permettant de trier un vecteur donné par la méthode du tri bulle.

Action triBulle (tableau)
    D/R : tableau : vecteur[N] de Entier
    L : tmp, i, j, permut : Entier
    
    permut <- 1
    i <- N - 1
    TantQue i > 0 && permut = 1 Faire
        permut <- 0
        j <- 0
        TantQue j < i
            Si tableau[j + 1] < tableau[j] Alors
                permut <- 1
                tmp <- tableau[j + 1]
                tableau[j + 1] <- tableau[j]
                tableau[j] <- tmp
            FSi
            j <- j + 1
        FTantQue
        i <- i - 1
    FTantQue
FAction
    --------------
    | CORRECTION |
    ---------------------------------------
    | Fonction nbocc (v, nb) : Entier
    |         D : 

------------------------------------------------------------
____Exercice 7: Ecrire un algorithme permettant de trier un vecteur donné par la méthode du tri par sélection/permutation.
Action triSelection (tableau)
    D/R : tableau : vecteur[N] de Entier
    L : n, i, j, min, tmp : Entier
    
    n <- N
    Pour i de 0 à n - 2 Faire
        min <- i
        Pour j de i + 1 à n - 1 Faire
            Si tableau[j] < tableau[min] Alors
                min <- j
            FSi
        FPour
        Si min != i Alors
            tmp <- tableau[i]
            tableau[i] <- t[min]
            t[min] <- tmp
        FSi
    FPour
FAction

------------------------------------------------------------

____Exercice 8: Ecrire un algorithme permettant de trier un vecteur donné par la méthode du tri par insertion.
Action triInsertion (tableau)
    D/R : tableau : vecteur[N] de Entier
    L : n, i, x, j : Entier
    
    n <- N
    Pour i de 1 à n - 1 Faire
        x <- tableau[i]
        j <- i
        TantQue j > 0 && tableau[j - 1] > x Faire
            tableau[j] <- tableau[j - 1]
            j <- j - 1
        FTantQue
        tableau[j] <- x
    FPour
FAction

------------------------------------------------------------

____
#define N 50
#define Nmax 200

void decodage(char chaine[], int tailleChaine, char resultat[], int tailleResultat)
{
    int pos=0;
    int presultat=0;
    int y;
    printf("length taille chaine : %d\n",tailleChaine);
    while(chaine[pos]!='\0' && pos<tailleChaine)
    {
        printf("pos : %d\n",pos);
        if(chaine[pos+1]=='\0')
        {
            resultat[presultat]=chaine[pos];
            presultat++;
            pos++;
        }
        else
        {
            if(chaine[pos]>'0' && chaine[pos]<='9')
            {
                y =  chaine[pos] - '0' +1;
                printf("int conversion : %d\n",y);
                while(y>0)
                {
                    printf("int conversion suivi : %d\n",y);
                    resultat[presultat]=chaine[pos+1];
                    presultat++;
                    y--;
                }
                pos=pos+2;
            }
            else
            {
                if(chaine[pos]=='0')
                {
                    resultat[presultat]=chaine[pos+1];
                    presultat++;
                    pos=pos+2;
                }
                else
                {
                    if(chaine[pos]>='a' && chaine[pos]<='z'){
                        resultat[presultat]=chaine[pos];
                        presultat++;
                        pos=pos+1;
                    }
                }
            }


        }
    }
    resultat[presultat]='\0';

}

void testDecodage()
{
    char chaine[N];
    char resultat[Nmax];
    strcpy(chaine, "a3b4d03324");
    printf("%s\n",chaine);
    decodage(chaine,strlen(chaine),resultat,Nmax);
    printf("%s\n",resultat);
}

------------------------------------------------------------

____Exercice bis: écrire l'algorithmen de recherche dichotomique
Fonction dichotomie (vect, taille, val) : Entier
    D : vect : vecteur[taille] de Entier
        taille : Entier (taille du tableau)
        val : Entier (valeur dont on doit déterminer la présence ou l'absence)
    L : milieu : Entier (indice du milieu du tableau)
    
    Si vect[milieu] = val Faire
        retourner(milieu)
    
    Sinon Si milieu == 0 Faire
        retourner(-1)
    
    Sinon Si vect[milieu] > val Faire
        retourner(dichotomie (vect[milieu+1], taille-milieu, val))
    
    Sinon Si vect[milieu] < val Faire
        retourner(dichotomie (vect, milieu, val))
    
    Sinon Faire
        retourner(-2)
FinFonction

int dichotomie (int vect[], int taille, int val) {
    int milieu = taille / 2;
    if (vect[milieu] == val) {
        return milieu;
    }
    else if (milieu == 0) {
        return -1;
    }
    else if (vect[milieu] > val) {
        return dichotomie (vect[milieu+1], taille-milieu, val);
    }
    else if (vect[milieu] < val) {
        return dichotomie (vect[], milieu, val);
    }
    
}

------------------------------------------------------------
------------- Feuille de TD  - Les vecteurs II -------------
------------------------------------------------------------

____Exercice 1: Ecrire une fonction qui détermine si un mot de N caractères, rangé dans un vecteur donné de taille N est un palindrome (mot pouvant être lu de droite à gauche ou de gauche à droite).
Exemples de palindrome : ELLE, REVER, SEMES, ...
Fonction palindrome (mot) : Entier
    D : mot : vecteur[N] de Caractères
    L : i, j : Entier
    
    j = N-1-i
    TantQue mot[i] == mot[j] et i < j Faire
        i++
        j--
    FTantQue
    Si i >= j Alors           |  
        retourner(Faux)       |  
    Sinon                     |  retourner(i >= j)
        retourner(Vrai)       |  
    FSi                       |  
FFonction

------------------------------------------------------------

____Exercice 2 : Soit un vecteur de caractères de taille N contenant un mot de N caractères. Erire un algorithme inversant le mot.
Action inverse (mot) : Entier
    D : mot : vecteur[N] de Caractères
    L : i, j, milieu : Entier
        tmp : Caractères
    
    milieu <- N/2
    j = N-1-i
    TantQue i<= milieu Faire
        tmp <- mot[i]
        mot[i] <- mot[j]
        mot[j] <- tmp
        i++
        j--
    FTantQue
FAction

------------------------------------------------------------

____Exercice 3 : Pour un entier n donné, calculer et ranger dans un vecteur les nombres 0!, 1!, 2!, 3!, ... ,(n-1)! en faisant un minimum de calculs.
Action factoriel (vect)                    |Action factoriel_rec (vect)                |Action factoriel_rec (vect)
    D : vect : vecteur[N] de Entier        |    D : vect : vecteur[N] de Entier        |    D : vect : vecteur[N] de Entier
    L : i : Entier (indice dans le tableau)|                                           |    Fonction factoriel_recursion (vect, N-1)
                                           |    vect[0] = 1                            |FAction
    i <- 1                                 |    factoriel_recursion (vect, 1)          |
    vect[0] = 1                            |FAction                                    |Fonction factoriel_recursion (vect, index) : Entier
    TantQue i < N Faire                    |                                           |    D : index : Entier
        vect[i] <- vect[i-1] * i           |Action factoriel_recursion (vect, index)   |    D/R : vect : vecteur[N] de Entier 
        i++                                |    D : vect : vecteur[N] de Entier        |    
    FTantQue                               |    D/R : index : Entier                   |    Si index = 0 Faire
FAction                                    |                                           |        vect[0] = 1
                                           |    Si index < N Faire                     |    
                                           |        vect[index] = vect[index-1] * index|    Sinon Faire
                                           |        factoriel_recursion (vect, index+1)|        factoriel_recursion (vect, index-1)
                                           |    FSi                                    |        vect[index] = vect[index-1] * index
                                           |FAction                                    |    FSi
                                                                                       |FFonction

------------------------------------------------------------

____Exercice 4 : On appelle mot une suite de caractères alphabétiques, c'est à dire une suite de caractères appartenant à A = {a, b, ... , z}.
On considérera que les mots, les masques et les filtres sont des chaînes de caractères (suite de caractères terminée par ‘\0’) stockées dans des vecteurs de taille N.
----------------
____Exercice 4_1 : Un masque est une suite de caractères appartenant à A È {?}. Un point d'interrogation dans un masque sert à représenter n'importe quel caractère alphabétique. Un mot est compatible avec un masque si ce mot peut être obtenu à partir de ce masque en remplaçant dans celui-si chaque '?' par un caractère quelconque.
Exemples : le masque ?e?e est compatible avec les mots reve, tete ou bete mais n'est pas compatible avec rive ou geler.
Écrire une fonction qui teste si un mot et un masque sont compatibles.
Fonction mot_compatible_masque (mot, masque) : Entier
    D : mot, masque : vecteur[N] de Caractères
    L : i : Entier
    
    i <- 0
    TantQue mot[i] != '\0' && masque[i] != '\0' && (masque[i] == '?' || mot[i] == masque[i]) Faire
        i++
    FTantQue
    retourner(mot[i] == '\0' && masque[i] == '\0')
FFonction
----------------
____Exercice 4_2 : Un filtre est une suite de caractères appartenant à A È {?, *}, le caractère '*' apparaissant au plus une fois. Un mot est compatible avec un filtre si ce mot peut être obtenu à partir de ce filtre en remplaçant dans celui-ci chaque '?' par un caractère et en remplaçant '*' par une suite quelconque (éventuellement vide) de caractères.
Exemples : Le filtre a*e est compatible avec tous les mots commençant par a et se terminant par e, *??? est compatible avec tous les mots comportant au moins trois caractères.
Écrire une fonction qui teste si un mot et un filtre sont compatibles.
Fonction mot_compatible_masque (mot, masque) : Entier
    D : mot, masque : vecteur[N] de Caractères
    L : i, j : Entier
    
    i <- 0
    j <- 0
    TantQue mot[i] != '\0' && masque[j] != '\0' && (masque[j] == '*' || masque[j] == '?' || mot[i] == masque[j]) Faire
        Si masque[j] != '*' Faire
            i++
        FSi
        j++
    FTantQue
    retourner(mot[i] == '\0' && masque[j] == '\0')
FFonction

------------------------------------------------------------
---------------  Feuille de TD  -  Matrices  ---------------
------------------------------------------------------------

____Exercice 1: Soit mat1 et mat2, 2 matrices d'entiers de taille N*M. Ecrire un algorithme qui effectue la somme des matrices mat1 et mat2.
Action somme_mat(mat1, mat2, mat3)
    D : mat1, mat2 : matrices[N][M] d'Entiers
    R : mat3 : matrice[N][M] d'Entiers
    L : i, j : Entiers
    Pour i allant de 0 à N-1 Faire
        Pour j allant de 0 à M-1 Faire
            mat3[i][j] <- mat1[i][j] + mat2[i][j]
        FinPour
    FinPour
FinAction

____Exercice 2 : Soit N un entier et M une matrice[N][N] d'entier. Ecrire un algorithme qui détermine l'indice de la colonne dont la somme des coefficients est la plus grande.
Fonction somme_mat(mat1) : Entier
    D : mat1 : matrices[N][M] d'Entiers
    L : i, j, val1, val2, index<retour> : Entiers
        somme : vecteur[N] d'Entiers
    index <- 0
    val2 <- 0
    Pour i allant de 0 à N-1 Faire
        val1 <- 0
        Pour j allant de 0 à M-1 Faire
            val1 <- val1 + mat2[i][j]
        FinPour
        Si val1 > val2 Faire
            val2 <- val1
            index <- i
        FinSi
    FinPour
    retourner index
FinFonction

____Exercice 3 :
Soit m une matrice de booléen de taille N*N, représentant une relation sur l'ensemble E={0, .., N-1} : m[i][j]=Vrai si i est en relation avec j ; m[i][j] = Faux sinon.
____Exercice 3_1 : Ecrire un algorithme qui détermine si la relation ainsi représentée est réflexive. Rappel : une relation R sur E est réflexive si ∀ i ∈ E, i R i.
----------------
Fonction mat_reflexive(mat) : Boolean
    D : mat : matrices[N][N] de Booleans
    L : i : Entiers
        est_reflexive : Boolean<retour>
    est_reflexive <- Vrai
    TantQue i < N && est_reflexive Faire
        est_reflexive <- mat[i][i]
        i++
    FinTantQue
    retourner est_reflexive
FinFonction
____Exercice 3_2 : Ecrire un algorithme qui détermine si la relation ainsi représentée est symétrique. Rappel : une relation R sur E est symétrique ssi ∀ i,j ∈ E, si i R j alors j R i.
----------------
Fonction mat_symétrique(mat) : Boolean
    D : mat : matrices[N][N] de Booleans
    L : i, j : Entiers
        est_symétrique : Boolean<retour>
    est_symétrique <- Vrai
    i <- 0
    TantQue i < N Faire
        j <- 0
        TantQue j < i && est_symétrique Faire
            Si mat[i][j] Faire
                est_symétrique = mat[j][i]
            FinSi
            j++
        FinTantQue
        i++
    FinTantQue
    retourner est_symétrique
FinFonction
____Exercice 3_3 : Ecrire un algorithme qui détermine si la relation ainsi représentée est transitive. Rappel : une relation R sur E est transitive ssi ∀ i,j,k ∈ E, si i R j et j R k alors i R k.
----------------
Fonction mat_transitive(mat) : Boolean
    D : mat : matrices[N][N] de Booleans
    L : i, j : Entiers
        est_transitive : Boolean<retour>
    est_transitive <- Vrai
    TantQue i < N Faire
        TantQue j < N Faire
            Si mat[i][j] Faire
                k <- 0
                TantQue k < N && est_transitive Faire
                    Si mat[j][k] Faire
                        est_transitive = mat[i][k]
                    FinSi
                    k++
                FinTantQue
            FinSi
            j++
        FinTantQue
        i++
    FinTantQue
    retourner est_transitive
FinFonction


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Une classe est constituée de NBE élèves. Un élève est représenté par un nom, un prénom, une adresse et les NN notes qu'il a obtenues dans les NN matières (1 note par matière). L'adresse est représentée par un numéro de rue, un nom de rue, un nom de ville


1) Définir le type Adresse permettant de représenter une adresse.
type Adresse = structure
                    numero_rue   : Chaine
                    nom_rue      : Chaine
                    nom_ville : Chaine
fin


2) Ecrire une fonction qui détermine si 2 adresses données appartiennent à la même ville.
fonction meme_ville (adr1, adr2) : Boolean
    D : adr1, adr2 : Adresse
    retourner(adr1.nom_ville == adr2.nom_ville)
finfonction


3) Définir le type Eleve.
type Eleve = structure
                    nom : Chaine
                    prenom : Chaine
                    adresse : Adresse
                    notes : vecteur [NN] de Reels
fin


4) Ecrire une fonction qui étant donné un élève détermine la moyenne de ses notes.
fonction moyenne_eleve (eleve) : Reel
    D : eleve : Eleve
    L : i, moyenne : Entier
    moyenne = 0
    pour i allant de 0 à NN-1 faire
        moyenne += eleve.notes[i]
    finpour
    retourner(moyenne/NN)
finfonction


5) Définir le type Classe.
type Classe : vecteur [NBE] de Eleve


6) Ecrire une fonction qui pour une classe donnée, affiche pour chaque élève : nom, prenom, adresse et moyenne.
action eleves_de_classe (classe)
    D : classe : Classe
    L : i : Entier
    pour i allant de 0 à NBE-1 faire
        afficher(classe[i].prenom + ' ' + classe[i].nom + " habite au " + classe[i].adresse.numero_rue + ", " + classe[i].adresse.nom_rue + " à " + classe[i].adresse.nom_ville. La moyenne de ses notes est de + moyenne_eleve(classe[i]) + ".\n")
    finpour
finaction


7) Ecrire une fonction qui pour une classe et une ville donnée, affiche la liste des élèves (nom, prénom) qui habitent cette ville.
action eleves_de_classe_et_ville (classe, ville)
    D : classe : Classe
        ville : Chaine
    L : i : Entier
    pour i allant de 0 à NBE-1 faire
        si classe[i].adresse.nom_ville == ville alors
            afficher(classe[i].prenom + ' ' + classe[i].nom + '\n')
        finsi
    finpour
finaction


8) Définir le type Classe en C.
#define TCH 50
#define NBE 30
#define NN 15

typedef struct {
    char numero_rue[TCH];
    char nom_rue[TCH];
    char nom_ville[TCH];
} Adresse;

typedef struct {
    char nom[TCH];
    char prenom[TCH];
    Adresse adresse;
    float notes[NN];
} Eleve;

typedef Eleve Classe [NBE];


9) Ecrire en C la fonction permuter(Eleve * eleve1, Eleve * eleve2).
void permuter(eleve1, eleve2) {
    Eleve eleveTmp = * eleve1;
    * eleve1 = * eleve2;
    * eleve2 = eleveTmp;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#define CONSTANTE 10
#define BUFFER 256

void affichage (int x, int y, int z) {
    printf("x => %d\ny => %d\nz => %d\n", x, y, z);
}

void lecture (int * px, int * py, int * pz) {
    scanf("%d%d%d", px, py, pz);
}

/*---------*/

void maxmin2 (int * pmin, int * pmax) {
    if (*pmin > *pmax){
        int tmp;
        tmp = *pmin;
        *pmin = *pmax;
        *pmax = tmp;
    }
}

void tri (int *px , int * py, int * pz) {
    maxmin2(px, py);
    maxmin2(py, pz);
    maxmin2(px, py);
}

/*----------*/

int chiffre (char ch) {
//  int in;
//  in = (int)ch;
//  return ((48 <= in) && (in <= 57))?'T':'F';
    
    
    
    return (('0' <= ch) && (ch <= '9'));
    
    
    
    /*
    int in;
    in = atoi(&ch);
    // RUST : in = dbg!(atoi(&ch));
    printf("atoi(&%c) = %d\n", ch, in);
    //     printf("atoi(&%c) = %d\n", ch, in);
    int boolean;
    boolean = ((0 < in) && (in <= 9))*/ /*?'T':'F';*/ /*;
    printf("boolean : %d\n",boolean);
    
    
    if (ch == '0'){
        putchar('^');
        putchar('\n');
        return 'T';
    }
    else if (boolean != 0){
            putchar('~');
            putchar('\n');
            return 'T';
        }
    else {
        putchar('`');
        putchar('\n');
        return 'F';
    }   
    */
    
    //     return ((0 <= in) && (in <= 9));
}

int minuscule (char ch) {
    return (('a' <= ch) && (ch <= 'z'));
}

int majuscule (char ch) {
    return (('A' <= ch) && (ch <= 'Z'));
}

void analyse_phrase (int * pmin, int * pmaj, int * pch, int * pin) {
    char c;
    
    * pmin = 0;
    * pmaj = 0;
    * pch = 0;
    * pin = 0;
    
    scanf("%c", &c);
    
    while (c != '.') {
        
        (* pch) ++;
        
        if (chiffre(c)) {
            (* pin) ++;
        }
        
        else if (minuscule(c)) {
            (* pmin) ++;
        }
        
        else if (majuscule(c)) {
            (* pmaj) ++;
        }

        scanf("%c", &c);
    }
    (* pch) ++; // pour compter le '.' final
}


int main () {
    /* int x, y, z; */
    //     char c;
    int min, maj, ch, in;
    //     char b[BUFFER];
    /* lecture(&x, &y, &z);
    affichage(x, y, z); */
    
    /*-------*/
    
    /* lecture(&x, &y, &z);
    tri(&x, &y, &z);
    affichage(x, y, z); */
    
    /*-------*/
    
    /*//     scanf("%c:%c", &c, &d);
    scanf("%c", &c);
    printf("chiffre(%c) => %d\n", c, chiffre(c));
    //     printf("%c\n", d);*/
    
    /*-------*/
    
    //     scanf("%c", &c);
    //     printf("minuscule(%c) => %d\n", c, minuscule(c));
    //     printf("majuscule(%c) => %d\n", c, majuscule(c));
    analyse_phrase(&min, &maj, &ch, &in);
    printf("min : %d\nmaj : %d\nch : %d\nin : %d\n\n", min, maj, ch, in);
    
    /*
     * #include <ctype.h>
     * tolower(char c);
     * toupper(char c);
     */
    
    /* indentation correcte */
    /* if 1 {
        toujours encore la bone indentation "
    } */
    /* nomSignificatif = "pour les variables et fonctions" => lisibilité */
    /* ne pas lésigner sur les commentaires */
    /* paS DE VARIABLES GLOBALES pour l'instant */
    /* CONSTANTES ; identificateursDeVariables ; identificateursDeFonctions */
    /* if 1 {
        variables de blocs déclarées en début de bloc
    } */
    /* mieux vaut lisible et un peu moins efficace au calcul que 3ms plus rapide au calcul et 5 jours de plus pour comprendre le code */
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

int somme (int a, int b) {
    return a + b;
}

int soustraction (int a, int b) {
    return a - b;
}

int produit (int a, int b) {
    return a * b;
}

int division (int a, int b) {
    return a / b;
}

char lireCar () {
    char a = getchar();
    while (a == ' ' || a == '\n') {
        a = getchar();
    }
     return a;
}

int lecture_expression_arithmetique () {
    int a, b;
    char ope;
    a = lireCar()-48;
    printf("%d ", a);
    ope = lireCar();
    printf("%c ", ope);
    
    while (ope != '='){
        b = lireCar()-48;
        printf("%d ", b);
        if (ope == '+') {
            a = somme(a, b);
        }
        else if (ope == '-') {
            a = soustraction(a, b);
        }
        else if (ope == '*') {
            a = produit(a, b);
        }
        else if (ope == '/') {
            if (b != 0) {
                a = division(a, b);
            }
            else {
                printf("!!!\n\n     ^\n    / \\\n   / | \\\n  /  .  \\   Error : division by _-\\0/-_\n /_______\\\n     |\n     |\n\n-");
                return -0;
            }
        }
        ope = lireCar();
        printf("%c ", ope);
    }
    return a;
}

int main () {
    /*
    int a;
    int b;
    printf("Veuillez saisir des valeurs pour a et b (tests de somme, soustraction et produit)\n");
    printf("\ta : ");
    scanf("%d", &a);
    printf("\tb : ");
    scanf("%d", &b);
    
    printf("\nsomme : \n\t%d + %d = %d\n", a, b, somme(a, b));
    printf("\nsoustraction : \n\t%d - %d = %d\n", a, b, soustraction(a, b));
    printf("\nproduit : \n\t%d * %d = %d\n", a, b, produit(a, b));
    
    printf("%c\n", lireCar());
    */
    
    printf("%d\n", lecture_expression_arithmetique());
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void position_valeur (int nombreRandom, int devinette, int i, int* pfini) {
    if (devinette == nombreRandom) {
        printf("\n\t:D :D -- Félicitation ! Tu as deviné et %d tentatives -- :D :D\n", i+1);
        *pfini = 1;
    }
    else {
        printf(" Essaye encore, le nombre à trouver est ");
        
        if (devinette > nombreRandom){
            printf("inférieur");
        }
        else {
            printf("supérieur");
        }
        
        printf(" à %d\n", devinette);
        printf(" Tu as encore \\_%d_/ chances ;·)\n", 5 - i - 1);
    }
}

int main() {
    int nombreRandom;
    int devinette;
    int i = 0;
    int fini;
    
    fini = 0;
    
    /* Pour générer un nombre aléatoire compris entre 1 et 100 */
    srand(time(NULL));
    nombreRandom = 1 + (rand() % 100);
    
    printf(" ^^ Devine l'entier que j'ai choisi, entre 1 et 100 inclus :·) \n");
    
    while (i < 5 && !fini) {
        scanf("%d", &devinette);
        
        position_valeur (nombreRandom, devinette, i, &fini);
        
        i++;
    }
    
    if(!fini) {
        printf("\n\tLe nombre qu'il fallait trouver était : %d :.(\n\tLa prochaine sera la bonne ;)\n", nombreRandom);
    }
    
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define N 10

// Lancer "./exe.sh"
////// ou
// -> commande pour compiler :
//              gcc -Wall -o vecteurs vecteurs.c
// -> commande pour exécuter :
//              ./vecteurs < vectEntree

/**
 * Q1 – Écrire une fonction qui lit N réels et les range dans un vecteur.
 */
void lecture_vect (float tableau[], int taille) {
    for (int index = 0 ; index < taille ; index ++) {
        scanf("%f", &tableau[index]);
    }
}

int main1(){
    int taille = N;
    float tableau[taille];
    lecture_vect(tableau, taille);
    return 0;
}



/**
 * Q2 – Écrire une fonction qui affiche les éléments d'un vecteur de réels.
 */
void affiche_vect (float tableau[], int taille) {
    printf("[");
    for (int index = 0 ; index < taille-1 ; index ++){
        printf("%f, ", tableau[index]);
    }
    printf("%f]\n", tableau[taille-1]);
}

int main2(){
    int taille = N;
    float tableau[taille];
    lecture_vect(tableau, taille);
    affiche_vect(tableau, taille);
    return 0;
}



/**
 * Q3 – Écrire une fonction qui détermine la somme des réels positifs et la somme des réels négatifs d'un vecteur de
réels donné.
 */
void somme_positifs_negatifs (float tableau[], int taille, float * psomme_pos, float * psomme_neg) {
    *psomme_pos = 0;
    *psomme_neg = 0;
    
    for (int index = 0 ; index < taille ; index ++) {
        if (tableau[index] > 0) {
            *psomme_pos += tableau[index];
        }
        else if (tableau[index] < 0) {
            *psomme_neg += tableau[index];
        }
    }
}

int main3(){
    int taille = N;
    float tableau[taille];
    float somme_pos;
    float somme_neg;
    lecture_vect(tableau, taille);
    somme_positifs_negatifs(tableau, taille, &somme_pos, &somme_neg);
    affiche_vect(tableau, taille);
    printf("  somme_pos : %f\n  somme_neg : %f\n", somme_pos, somme_neg);
    return 0;
}



/**
 * Q4 – Soient V1 et V2, deux vecteurs de réels, représentant 2 suites croissantes (dans chaque vecteur, les réels sont rangés par ordre croissant).
 * Écrire une fonction qui construit le vecteur V3 (de taille 2N) résultat de la fusion de V1 et V2.
 */
void fusion (float tableau1[], int taille1, float tableau2[], int taille2, float tableau_res[]) {
    int i, j, cpt_res;
    i = 0;
    j = 0;
    cpt_res = 0;
    while (i < N && j < N) {
        if (tableau1[i] < tableau2[j]) {
            tableau_res[cpt_res] = tableau1[i];
            //printf("v1 : %f\n", tableau1[i]);
            i++;
        }
        else {
            tableau_res[cpt_res] = tableau2[j];
            //printf("v2 : %f\n", tableau2[j]);
            j++;
        }
        //printf("v3 (%d) : %f\n\n", cpt_res, tableau_res[cpt_res]);
        cpt_res ++;
    }
    //printf("\twhile\n");
    while (i < N) {
        tableau_res[cpt_res] = tableau1[i];
        //printf("v1 : %f\n", tableau1[i]);
        //printf("v3 (%d) : %f\n\n", cpt_res, tableau_res[cpt_res]);
        i++;
        cpt_res++;
    }
    while (j < N) {
        tableau_res[cpt_res] = tableau2[j];
        //printf("v2 : %f\n", tableau2[j]);
        //printf("v3 (%d) : %f\n\n", cpt_res, tableau_res[cpt_res]);
        j++;
        cpt_res++;
    }
}

int main4(){
    int taille1 = N;
    int taille2 = N;
    float tableau1[taille1];
    float tableau2[taille2];
    float tableau_res[taille1+taille2];
    lecture_vect(tableau1, taille1);
    lecture_vect(tableau2, taille2);
    fusion (tableau1, taille1, tableau2, taille2, tableau_res);
    affiche_vect(tableau_res, taille1+taille2);
    return 0;
}



/**
 * Q5 – Modifier la fonction écrite en question 1 afin de vérifier que l'utilisateur rentre bien les entiers par ordre croissant (redemander la saisie d'un entier s'il est inférieur à l'entier précédemment saisi).
 */
void lecture_vect_croissant (float tableau[], int taille) {
    float val;
    int index = 1;
    scanf("%f", &tableau[0]);
    while (index < taille) {
        scanf("%f", &val);
        if (val > tableau[index-1]) {
            tableau[index] = val;
            index ++;
        }
    }
}

int main5(){
    int taille = N;
    float tableau[taille];
    lecture_vect_croissant (tableau, taille);
    affiche_vect(tableau, taille);
    return 0;
}



/**
 * Q6 – Soient V1 et V2, deux vecteurs de réels, représentant 2 suites croissantes et dans lesquels chaque élément est unique (pas de doublon dans un vecteur).
 * Écrire une fonction qui construit le vecteur V3, résultat de l'intersection de V1 et V2.
 * ICI, on parcourt une première fois les vecteurs en comptant la taille du vecteur résultat. On crée le vecteur résultat avec cette taille et on initialise ses valeurs.
 */
int taille_V3(float tableau1[], int taille1, float tableau2[], int taille2) {
    int i, j, cpt_res;
    i = 0;
    j = 0;
    cpt_res = 0;
    while (i < taille1 && j < taille2) {
        if (tableau1[i] == tableau2[j]) {
            i++;
            j++;
            cpt_res++;
        }
        else if (tableau1[i] < tableau2[j]) {
            i++;
        }
        else if (tableau1[i] > tableau2[j]) {
            j++;
        }
    }
    return cpt_res;
}

void intersection_1 (float tableau1[], int taille1, float tableau2[], int taille2, float tableau_res[]) {
    int i, j, cpt_res;
    i = 0;
    j = 0;
    cpt_res = 0;
    while (i < taille1 && j < taille2) {
        if (tableau1[i] == tableau2[j]) {
            tableau_res[cpt_res] = tableau1[i];
            i++;
            j++;
            cpt_res++;
        }
        else if (tableau1[i] < tableau2[j]) {
            i++;
        }
        else if (tableau1[i] > tableau2[j]) {
            j++;
        }
    }
}

int main6_1(){
    int taille1 = N;
    int taille2 = N;
    int taille_res;
    float tableau1[taille1];
    float tableau2[taille2];
    lecture_vect(tableau1, taille1);
    lecture_vect(tableau2, taille2);
    taille_res = taille_V3(tableau1, taille1, tableau2, taille2);
    float tableau_res[taille_res];
    intersection_1 (tableau1, taille1, tableau2, taille2, tableau_res);
    affiche_vect(tableau_res, taille_res);
    return 0;
}

/**
 * Q6 – Soient V1 et V2, deux vecteurs de réels, représentant 2 suites croissantes et dans lesquels chaque élément est unique (pas de doublon dans un vecteur).
 * Écrire une fonction qui construit le vecteur V3, résultat de l'intersection de V1 et V2.
 * ICI, on crée le vecteur résultat à la taille du plus petit des deux en entrée. Sa taille effective est calculée au cours de son initialisation et retournée pour une prochaine utilisation du vecteur et de sa taille.
 */
int intersection_2 (float tableau1[], int taille1, float tableau2[], int taille2, float tableau_res[]) {
    int i, j, cpt_res;
    i = 0;
    j = 0;
    cpt_res = 0;
    while (i < taille1 && j < taille2) {
        if (tableau1[i] == tableau2[j]) {
            tableau_res[cpt_res] = tableau1[i];
            i++;
            j++;
            cpt_res++;
        }
        else if (tableau1[i] < tableau2[j]) {
            i++;
        }
        else if (tableau1[i] > tableau2[j]) {
            j++;
        }
    }
    return cpt_res;
}

int main6_2(){
    int taille1 = N;
    int taille2 = N;
    int taille_res = N;
    float tableau1[taille1];
    float tableau2[taille2];
    float tableau_res[taille_res];
    lecture_vect(tableau1, taille1);
    lecture_vect(tableau2, taille2);
    taille_res = intersection_2 (tableau1, taille1, tableau2, taille2, tableau_res);
    affiche_vect(tableau_res, taille_res);
    return 0;
}

/**
 * Le point ici est que soit on perd du temps mais on gagne de la place mémoire, soit on gagne des parcours de boucle et donc du temps mais on prend le risque de perdre de la place mémoire. La première solution (économe en place mémoire) est possible depuis la version de C de 1999.
 */


int main () {
    main6_2();
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 25

void lecture_vect (char tableau[], int taille) {
    for (int index = 0 ; index < taille ; index ++) {
        scanf("%c", &tableau[index]);
    }
}
void affiche_vect (char tableau[]) {
    int index = 0;
    while (tableau[index] != '\0') {
        printf("%c", tableau[index]);
        index ++;
    }
}

/**
 * Exercice 1
 */
/**
 * Q1 :
 * Ecrire une fonction C qui inverse une chaîne de caractères donnée. La tester par appel dans un main
 */
void revers (char chaine[]){
    int size = strlen(chaine);
    int milieu = (size/2)-1;
    char val_inter;
    for (int i = 0 ; i <= milieu ; i += 1){
        val_inter = chaine[i];
        chaine[i] = chaine[size - 1 - i];
        chaine[size - 1 - i] = val_inter;
    }
}

int main1(/*int argc, char * argv[]*/) {
    char chaine[N];
    lecture_vect(chaine, N);
    revers(chaine);
    affiche_vect(chaine);
    return 0;
}


/**
 * Q2 :
 * Ecrire un programme qui inverse chaque mot donné en argument sur la ligne de commande au lancement de l' exécution.
 */
void revers_words (char *chaine[], int size){
//     printf( "argc = %d\n", size );
//     for( int i = 0; i < size; ++i ) {
//         printf( "argv[ %d ] = %s\n", i, chaine[ i ] );
//     }
    for (int i = 1 ; i < size ; i+= 1){
        revers(chaine[i]);
        affiche_vect(chaine[i]);
        printf(" ");
    }
}

int main2(int argc, char * argv[]) {
    revers_words(argv, argc);
    printf("\n");
    return 0;
}

/**
 * 
 */
int sum (int argc, char * argv[]){
    int val = 0;
    for (int i = 1 ; i < argc ; i += 1){
        val += atoi(argv[i]);
    }
    return val;
}

int main3 (int argc, char * argv[]) {
    printf("%d\n", sum(argc, argv));
    return 0;
}

/**
 * 
 */
int sum_calc (int argc, char * argv[]){
    int val = 0;
    for (int i = 2 ; i < argc ; i += 1){
        val += atoi(argv[i]);
    }
    return val;
}

int mult_calc (int argc, char * argv[]){
    int val = 1;
    for (int i = 2 ; i < argc ; i += 1){
        val *= atoi(argv[i]);
    }
    return val;
}

int div_calc (int argc, char * argv[]){
    int val = atoi(argv[2]);
    for (int i = 3 ; i < argc ; i += 1){
        val /= atoi(argv[i]);
    }
    return val;
}

int sub_calc (int argc, char * argv[]){
    int val = atoi(argv[2]);
    for (int i = 3 ; i < argc ; i += 1){
//         printf("_%d_\n", val);
        val -= atoi(argv[i]);
    }
    return val;
}

int calc (int argc, char * argv[]){
    if (argc < 3){
        return -1;
    }
    if (!strcmp(argv[1],"somme")){
        printf("somme : ");
        return sum_calc (argc, argv);
    }
    else if (!strcmp(argv[1],"mult")){
        printf("mult : ");
        return mult_calc (argc, argv);
    }
    else if (!strcmp(argv[1],"div")){
        printf("div : ");
        return div_calc (argc, argv);
    }
    else if (!strcmp(argv[1],"sous")){
        printf("sous : ");
        return sub_calc (argc, argv);
    }
    return -1;
}

int main4 (int argc, char * argv[]) {
    printf("%d\n", calc(argc, argv));
    return 0;
}




int main (int argc, char * argv[]) {
    main4 (argc, argv);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#define N 50

// Lancer "./exe.sh"
////// ou
// -> commande pour compiler :
//              gcc -Wall -o string string.c
// -> commande pour exécuter :
//              ./string




void lecture_vect (char tableau[], int taille) {
    for (int index = 0 ; index < taille ; index ++) {
        scanf("%c", &tableau[index]);
    }
}
void affiche_vect (char tableau[]) {
    int index = 0;
    while (tableau[index] != '\0') {
        printf("%c", tableau[index]);
        index ++;
    }
    printf("\n");
}

/**
 * Exercice 1 :
 * Soit ch une chaîne de caractère contenant un message codé ainsi : un caractère qui n'est pas un chiffre est conservé tel quel. Un chiffre v qui n'est pas le dernier caractère permet de répéter v+1 fois le caractère suivant (que ce soit un chiffre ou non).
 */
void decode (char tableau[], char tableau_res[]) {
    int i = 0;
    int index = 0;
    int flag_is_not_int;
    if ('0' <= tableau[index] && tableau[index] <= '9'){
        flag_is_not_int = tableau[index] - '0';
        i++;
    }
    else {
        flag_is_not_int = 0;
    }
    while (tableau[i] != '\0') {
        
        if (flag_is_not_int == -1 && '0' <= tableau[i] && tableau[i] <= '9') {
            flag_is_not_int = tableau[i] - '0';
        }
        
        else {
            if (flag_is_not_int == -1) {
                flag_is_not_int = 0;
            }
            for (int j = 0 ; j <= flag_is_not_int ; j ++){
                tableau_res[index] = tableau[i];
                index++;
            }
            flag_is_not_int = -1;
        }
        i++;
    }
    if (flag_is_not_int != -1) {
        tableau_res[index] = flag_is_not_int + '0';
        index++;
    }
    tableau_res[index+1] = '\0';
}

int main1(){
    int taille = N;
    char tableau[taille];
    char tableau_res[taille * 5];
    
    lecture_vect(tableau, taille);
    affiche_vect(tableau);
    
    decode(tableau, tableau_res);
    
    affiche_vect(tableau_res);
    return 0;
}



/**
 * Exercice 2 :
 * Écrire une fonction qui, à partir d'une chaîne donnée contenant un message construit une chaîne contenant le message codé (selon le code de l'exercice 1). Le codage devra être le plus court possible (pas de 0 inutiles).
 */
void encode (char tableau[], char tableau_res[]) {
    int i = 1;
    int index = 0;
//     char val_pre = 'a';
    char val = tableau[index];
    int cpt = 1;
    printf("\n\n\nWHILE\n");
    while (tableau[i] != '\0') {
        if (tableau[i] == val) {
            printf("tableau[i] : %c\n", tableau[i]);
            cpt ++;
            printf("cpt : %d\n", cpt);
        }
        else {
            while (cpt > 10) {
                tableau_res[index] = 9 + '0';
                printf("---> %c", tableau_res[index]);
                index++;
                tableau_res[index] = val;
                index++;
                cpt -= 10;
            }
            if ((cpt == 1 && '0' <= val && val <= '9') || cpt != 1){
                tableau_res[index] = (cpt - 1) + '0';
                printf("tableau_res[index] : '%c'\n", tableau_res[index]);
                printf("-cpt : %d\n\n", cpt);
                index ++;
            }
            tableau_res[index] = val;
            index ++;
            val = tableau[i];
            cpt = 1;
        }
        i++;
    }
    
    if (cpt != 1) {
        printf("\tcpt : %d\n\tval : %c\n", cpt, val);
        tableau_res[index] = cpt - 1 + '0';
        index ++;
    }
    
    tableau_res[index] = val;
    index ++;
    
    printf("\nEND WHILE\n\n\n");
}

int main2 () {
    int taille = N;
    char tableau[taille];
    char tableau_res[taille];
    
    lecture_vect(tableau, taille);
    printf("\nvect init : ");
    affiche_vect(tableau);
    
    encode (tableau, tableau_res);
    
    printf("vect init : ");
    affiche_vect(tableau);
    printf("vect calc : ");
    affiche_vect(tableau_res);
    return 0;
}



/**
 * Exercice 5 :
 * Écrire une fonction permettant de déterminer si un mot contenu dans un vecteur donné est un anagramme d'un autre mot contenu dans un autre vecteur donné (ie : les 2 mots contiennent exactement les mêmes lettres).
 */
int anagramme (char tableau1[], char tableau2[]) {
    if (strlen(tableau1) != strlen(tableau2)) {
        return 0;
    }
    int index1 = 0;
    int index2 = 0;
    while (tableau1[index1] != '\0') {
        while (tableau2[index2] != '\0' && tableau2[index2] != tableau1[index1]) {
            index2++;
        }
        if (tableau2[index2] == '\0') {
            return 0;
        }
        index1++;
        index2 = 0;
    }
    return 1;
}

int main3 () {
    char tableau1[N];
    char tableau2[N];
    
    tableau1[0] = 'P';
    tableau1[1] = 'A';
    tableau1[2] = 'I';
    tableau1[3] = 'N';
    tableau1[4] = 'S';
    tableau1[5] = '\0';
    
    tableau2[0] = 'S';
    tableau2[1] = 'A';
    tableau2[2] = 'P';
    tableau2[3] = 'I';
    tableau2[4] = 'N';
    tableau2[5] = '\0';

    
    int est_anagramme = anagramme(tableau1, tableau2);
    printf("%s est anagramme de %s : ", tableau1, tableau2);
    if (est_anagramme) {
        printf("vrai\n");
    }
    else {
        printf("faux\n");
    }
    
    
    
    tableau1[0] = 'B';
    tableau1[1] = 'A';
    tableau1[2] = 'L';
    tableau1[3] = 'L';
    tableau1[4] = 'E';
    tableau1[5] = 'T';
    tableau1[6] = '\0';
    
    tableau2[0] = 'T';
    tableau2[1] = 'A';
    tableau2[2] = 'B';
    tableau2[3] = 'L';
    tableau2[4] = 'E';
    tableau2[5] = '\0';
    
    est_anagramme = anagramme(tableau1, tableau2);
    printf("%s est anagramme de %s : ", tableau1, tableau2);
    if (est_anagramme) {
        printf("vrai\n");
    }
    else {
        printf("faux\n");
    }
    
    return 0;
}



/**
 * Exercice 3 :
 * Écrire une fonction permettant de déterminer le nombre d'occurrences d'une chaîne1 donnée dans une chaîne2 donnée.
 */
int occurences (char chaine1[], char chaine2[]) {
    int i;
    int j = 0;
    int cpt = 0;
    int size1 = strlen(chaine1);
    int size2 = strlen(chaine2);
    if (size1 < size2) {
        return 0;
    }
    
    while (chaine1[j + size2 - 1] != '\0') {
        printf("%d : %c%c%c%c\n", j, chaine1[j], chaine1[j + 1], chaine1[j + 2], chaine1[j + 3]);
        i = 0;
        while (i < (j + size2) && chaine1[j + i] == chaine2[i]) {
            i++;
        }
        if (i == size2) {
            cpt ++ ;
        }
        j++;
    }
    return cpt;
    // aabb » apparaît 2 fois dans la chaîne « aabbabaaabbab
}

int main4 () {
    char chaine1[N];
    char chaine2[N];
    
    chaine1[0] = 'a';
    chaine1[1] = 'a';
    chaine1[2] = 'b';
    chaine1[3] = 'b';
    chaine1[4] = 'a';
    chaine1[5] = 'b';
    chaine1[6] = 'a';
    chaine1[7] = 'a';
    chaine1[8] = 'a';
    chaine1[9] = 'b';
    chaine1[10] = 'b';
    chaine1[11] = 'a';
    chaine1[12] = 'b';
    chaine2[13] = '\0';
    
    chaine2[0] = 'a';
    chaine2[1] = 'a';
    chaine2[2] = 'b';
    chaine2[3] = 'b';
    chaine2[4] = '\0';
    
    printf("nbr d'occurences de %s dans %s : %d\n", chaine2, chaine1, occurences (chaine1, chaine2));
    
    return 0;
}



int main () {
    main1();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define N 3

/*
 * On dit qu'une matrice carrée d'entiers est un carré magique si les sommes des coefficients de chaque ligne, de chaque colonne et des 2 diagonales de la matrice sont égales.
 */


/**
 * Q1
 * – Ecrire une fonction qui lit N*N entiers et les range dans une matrice mat[N][N]
 */
void lit_matrice (int mat[][N], int nb_lignes) {
    int i, j;
    i = 0;
    while (i < nb_lignes) {
        j = 0;
        while (j < N) {
            scanf("%d", &mat[i][j]);
            j+=1;
        }
        i+=1;
    }
}

int main1() {
    int mat[N][N];
    
    lit_matrice(mat, N);
    
    return 0;
}

/**
 * Q2
 * – Ecrire une fonction qui affiche une matrice mat[N][N]
 */
void affiche_matrice (int mat[][N], int nb_lignes) {
    int i, j;
    j = 0;
    while (j < N) {
        i = 0;
        while (i < nb_lignes) {
            printf(" %d ", mat[i][j]);
            i+=1;
        }
        printf("\n");
        j+=1;
    }
}

int main2() {
    int mat[N][N];
    
    lit_matrice(mat, N);
    affiche_matrice(mat, N);
    
    return 0;
}

/**
 * Q3
 * – Ecrire une fonction qui calcule la somme des coefficients d'une ligne donnée d'une matrice donnée.
 */
int somme_ligne (int mat[][N], int nb_colonne, int i) {
    int somme = 0;
    int j = 0;
    while (j < nb_colonne) {
        somme += mat[i][j];
        j+=1;
    }
    return somme;
}

int main3() {
    int mat[N][N];
    int ligne;
    
    lit_matrice(mat, N);
    scanf("%d", &ligne);
    affiche_matrice(mat, N);
    printf("ligne : %d\n", ligne);
    
    printf("somme de la ligne %d : %d\n", ligne, somme_ligne(mat, N, ligne));
    return 0;
}

/**
 * Q4
 * – Ecrire une fonction qui calcule la somme des coefficients d'une colonne donnée d'une matrice donnée.
 */
int somme_colonne (int mat[][N], int nb_colonne, int j) {
    int somme = 0;
    int i = 0;
    
    while (i < N) {
        somme += mat[i][j];
        i+=1;
    }
    
    return somme;
}

int main4() {
    int mat[N][N];
    int colonne;
    
    lit_matrice(mat, N);
    scanf("%d", &colonne);
    affiche_matrice(mat, N);
    printf("ligne : %d\n", colonne);
    
    printf("somme de la colonne %d : %d\n", colonne, somme_colonne(mat, N, colonne));
    return 0;
}

/**
 * Q5
 * – Ecrire une fonction qui calcule les sommes des coefficients des 2 diagonales d'une matrice donnée.
 */
void somme_diagonales (int mat[][N], int nb_lignes, int * psomme_gd, int * psomme_dg) {
    (* psomme_gd) = 0;
    (* psomme_dg) = 0;
    int i = 0;
    while (i < nb_lignes) {
        (* psomme_gd) += mat[i][i];
        (* psomme_dg) += mat[i][N-1-i];
        i+=1;
    }
}

int main5() {
    int mat[N][N];
    int somme_gd, somme_dg;
    
    lit_matrice(mat, N);
    somme_diagonales(mat, N, &somme_gd, &somme_dg);
    
    printf("somme de la diagonale de gauche à droite (\\) : %d\nsomme de la diagonale de droite à gauche (/) : %d\n", somme_gd, somme_dg);
    return 0;
}

/**
 * Q6
 * Ecrire une fonction qui détermine si une matrice M donnée est magique.
 */
int magique (int mat[][N], int nb_lignes) {
    int somme_gd, somme_dg;
    somme_diagonales (mat, nb_lignes, &somme_gd, &somme_dg);
    int est_magique = somme_gd == somme_dg;
    int parcours = 0;
    while (parcours < nb_lignes && est_magique) {
        est_magique = (somme_ligne(mat, nb_lignes, parcours) == somme_gd) && (somme_colonne(mat, nb_lignes, parcours) == somme_gd);
        parcours += 1;
    }
    return est_magique?1:0;
}

int main6() {
    int mat[N][N];
    
    lit_matrice(mat, N);
    affiche_matrice(mat, N);
    
    printf("Cette matrice est-elle magique ? %c\n", magique(mat, N));
    return 0;
}

/**
 * Q7
 * On dit qu'un carré magique de taille N*N est normal s'il est constitué des tous les entiers de 1 à N*N.
 * Ecrire une fonction qui détermine si une matrice M donnée est un carré magique normal.
 */
int magique_normal (int mat[][N], int nb_lignes) {
    if (!magique(mat, nb_lignes)) {
        return 0;
    }
    int i = 0;
    int j = 0;
    int somme_mat = 0;
    int somme_N = 0;
    int vect[N*N+1];
    for (int ind = 0 ; ind <= N*N ; ind += 1){
        vect[ind] = 0;
    }
    int normal = 1;
    while (i < nb_lignes) {
        j = 0;
        while (j < N && normal) {
            if (mat[i][j] > N*N || vect[mat[i][j]] == 1){
                normal = 0;
            }
            else {
                vect[mat[i][j]] = 1;
            }
            
            j+=1;
        }
        i+=1;
    }
    return somme_mat==somme_N?1:0;
}

int main7() {
    int mat[N][N];
    
    lit_matrice(mat, N);
    affiche_matrice(mat, N);
    
    printf("Cette matrice est-elle magique normale ? %d\n", magique_normal(mat, N));
    return 0;
}


int main() {
    main7();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

#define MAX_PERSONNES 10
#define TCH 50

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char nom[TCH];
    char prenom[TCH];
    char num_tel[TCH];
    Date date_naissance;
} Personne;

typedef struct {
    Personne espace[MAX_PERSONNES];
    int dernier;
}Annuaire;



void lire_date(Date *pd1) {
    printf("Veuillez saisir le jour, le mois et l'année [int]\n");
    scanf("%d%d%d", &(pd1->jour), &(pd1->mois), &(pd1->annee));
}

void afficher_date(Date d1) {
    printf("jour : %d\nmois : %d\nannee : %d\n", d1.jour, d1.mois, d1.annee);
}

int lirePersonne(Personne *p_personne){
    if (scanf("%s", p_personne->nom) != EOF) {
        scanf("%s", p_personne->prenom);
        scanf("%d", &((p_personne->date_naissance).jour));
        scanf("%d", &((p_personne->date_naissance).mois));
        scanf("%d", &((p_personne->date_naissance).annee));
        scanf("%s", p_personne->num_tel);
        return 1;
    }
    return 0;
}

void afficher_personne(Personne personne){
    printf("%s, %s, %d/%d/%d, %s\n", personne.nom, personne.prenom, personne.date_naissance.jour, personne.date_naissance.mois, personne.date_naissance.annee, personne.num_tel);
}

void lire_annuaire(Annuaire * p_a1){
    p_a1->dernier = -1;
    Personne personne;
    while (lirePersonne(&personne) != 0 && p_a1->dernier < MAX_PERSONNES){
        p_a1->dernier += 1;
        p_a1->espace[p_a1->dernier] = personne;
    }
}

void afficher_annuaire(Annuaire a1) {
    int dernier = a1.dernier;
    for (int i = 0 ; i <= dernier ; i += 1){
        afficher_personne(a1.espace[i]);
    }
}


int mainTP9(){
// //     Date d1;
//     Personne p1;
    Annuaire a1;
// //     lire_date(&d1);
// //     afficher_date(d1);
//     lirePersonne(&p1);
//     afficher_personne(p1);
    lire_annuaire(&a1);
    afficher_annuaire(a1);
    return 0;
}


int rechDicho(Annuaire a1_ordonne, char nom_personne[]){
    int len = a1_ordonne.dernier+1;
    int debut = 0;
    int fin = len-1;
    int milieu = (debut + fin) / 2;
    int res_cmp = -7;
    while (debut <= fin && res_cmp != 0) {
        res_cmp = strcmp(a1_ordonne.espace[milieu].nom, nom_personne);
        if (res_cmp < 0) {
            debut = milieu + 1;
        }
        else if (res_cmp > 0) {
            fin = milieu - 1;
        }
        milieu = (debut + fin) / 2;
    }
    return res_cmp==0?milieu:-1;
}

int main_rechDicho() {
    Annuaire a1;
    lire_annuaire(&a1);
//     afficher_annuaire(a1);
    char * noms_cherches[5];
    noms_cherches[0] = "Timoleon";
    noms_cherches[1] = "Bidule";
    noms_cherches[2] = "Durand";
    noms_cherches[3] = "Machin";
    noms_cherches[4] = "Trucmuche";
    int res_dicho;
    for (int i = 0 ; i < 5 ; i += 1) {
        res_dicho = rechDicho(a1, noms_cherches[i]);
        if (res_dicho < 0) {
            printf("%s : inconnu\n", noms_cherches[i]);
        }
        else {
            printf("%s %s, né le %d/%d/%d ; téléphone : %s\n", noms_cherches[i], a1.espace[res_dicho].prenom, a1.espace[res_dicho].date_naissance.jour, a1.espace[res_dicho].date_naissance.mois, a1.espace[res_dicho].date_naissance.annee, a1.espace[res_dicho].num_tel);
        }
    }
    
    return 0;
}

int 



int main() {
    
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////// ---- | ---- /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Caroline Schmid mardi 19/01/2021
#include <stdio.h>
#include <string.h>
#define LEN 30
#define N 18

typedef struct {
    char region[LEN];
    char appel[LEN];
    int annee;
    int nb;
} Vin;

typedef Vin Cave[N];


void chargement (Cave v[], int length) { // Action effectuant le chargement des vins dans le vecteur v de taille N.
    for (int i = 0 ; i < length ; i += 1) {
        printf("%d) Veuillez indiquer :\n\t1- la région de provenance de ces vins : ", i);
        scanf("%s", v[i]->region);
        printf("\t2- leur appellation : ");
        scanf("%s", v[i]->appel);
        printf("\t3- leur date de production : ");
        scanf("%d", &(v[i]->annee));
        printf("\t4- le nombre de bouteilles dans ce lot : ");
        scanf("%d", &(v[i]->nb));
        printf("\n");
    }
}

void affichage (Cave v[], int length) { // Action affichant les données préalablement rangées dans le vecteur v.
    for (int i = 0 ; i < length ; i += 1) {
        printf("Ce vin provient de la région %s et est doté d'une appellation %s. Il a été produit en %d et %d bouteilles ont été produites pour ce cru.\n", v[i]->region, v[i]->appel, v[i]->annee, v[i]->nb);
    }
}

int nbBout (Cave v[], int length, char reg[], int size) { // Fonction fournissant en résultat le nombre de bouteilles de vins produits en région reg, présents dans la cave v.
    int ret = 0;
    for (int i = 0 ; i < length ; i += 1) {
        if (strcmp(v[i]->region, reg) == 0) {
            ret += v[i]->nb;
        }
    }
    return ret;
}

void supp (Cave v[], int length, int nb, char reg[], int sizeReg, char appell[], int sizeApp, int an) { // Action qui retire de la cave v, nb bouteilles de vin de la région reg, d’appellation appell, produit l’année an.
    int fin = 0;
    int i = 0;
    while (i < length && fin == 0) {
        if ((strcmp(v[i]->region, reg) == 0) && (strcmp(v[i]->appel, appell) == 0) && (v[i]->annee == an)) {
            printf("Le %s (%s %d) passe de %d bouteilles ", v[i]->appel, v[i]->region, v[i]->annee, v[i]->nb);
            if (v[i]->nb >= nb) {
                v[i]->nb -= nb;
            }
            else {
                v[i]->nb = 0;
            }
            printf("à %d bouteilles lorsqu'on en retire %d.\n", v[i]->nb, nb);
            fin = 1;
        }
        i += 1;
    }
}

void plusVieux (Cave v[], int length, char reg[], int sizeReg, char appell[], int sizeApp, int * p_anProd, int * p_nbBout) { // déterminant l’année de production (anProd) et le nombre de bouteilles (nbBout) du plus vieux vin d’appellation appel de la région reg dans la cave v.
    * p_anProd = -1;
    * p_nbBout = -1;
    for (int i = 0 ; i < length ; i += 1) {
        if ( (strcmp(v[i]->region, reg) == 0) && (strcmp(v[i]->appel, appell) == 0) ) {
            if (v[i]->nb > 0 && (v[i]->annee < (* p_anProd) || (* p_anProd) == -1)) {
                * p_anProd = v[i]->annee;
                * p_nbBout = v[i]->nb;
            }
        }
    }
}

int main(){
    /* chargement des données dans le vecteur */
    printf("\t_/CHARGEMENT DES DONNÉES\\_\n");
    Cave v[N];
    chargement (v, N);
    /* affichage du vecteur */
    printf("\n\n\t_/AFFICHAGE DU VECTEUR\\_\n");
    affichage (v, N);
    /* affichage du nombre de bouteilles de vins produits dans une région donnée
        (ex : pour la cave de l’exemple et la région « Bordeaux », il y a 24 bouteilles, (0 pour la région « Loire »)*/
    printf("\n\n\t_/NOMBRE DE BOUTEILLES PRODUITES DANS UNE RÉGION\\_\n");
    char reg[LEN];
    strncpy(reg, "Bordeaux", LEN);
    printf("%d bouteilles de vins produites dans la région %s.\n", nbBout (v, N, reg, LEN), reg);
    strncpy(reg, "Loire", LEN);
    printf("%d bouteilles de vins produites dans la région %s.\n", nbBout (v, N, reg, LEN), reg);
    /* retrait dans la cave d’un nombre donné de bouteilles d’un vin donné par sa région, son appellation et son année de production
        (pour l’exemple, le retrait de 2 bouteilles de vin d’Alsace, d’appellation « Riesling » et d’année 2015 fait passer le nombre de bouteilles de 6 à 4 pour ce vin. Le retrait de 4 bouteilles de Pouillis (Bourgogne 2010) fait passer le nombre de bouteilles de 2 à 0*/
    printf("\n\n\t_/RETRAIT DE BOUTEILLES D'UN VIN DONNÉ\\_\n");
    supp (v, N, 2, "Alsace", LEN, "Riesling", LEN, 2015);
    supp (v, N, 4, "Bourgogne", LEN, "Pouillis", LEN, 2010);
    /* affichage de l’année de production et du nombre de bouteilles du plus vieux vin donné par sa région et son appellation
        (pour l’exemple et le vin « Margaux » de la région « Bordeaux », l’année est 2002 et le nombre de bouteilles est 6 (pas de bouteilles de l’année 1998). On fournira les valeurs -1 pour l’année et le nombre de bouteilles si la cave ne contient pas le vin recherché)*/
    printf("\n\n\t_/PLUS VIEUX VIN ET NOMBRE DE BOUTEILLES\\_\n");
    int anProd;
    int nbBout;
    char region[LEN];
    char appellation[LEN];
    strncpy(region, "Alsace", LEN);
    strncpy(appellation, "Riesling", LEN);
    plusVieux (v, N, region, LEN, appellation, LEN, &anProd, &nbBout);
    printf("Le plus vieux cru de %s de %s date de %d et est constitué de %d bouteilles.\n", appellation, region, anProd, nbBout);
    strncpy(region, "Bordeaux", LEN);
    strncpy(appellation, "Margaux", LEN);
    plusVieux (v, N, region, LEN, appellation, LEN, &anProd, &nbBout);
    printf("Le plus vieux cru de %s de %s date de %d et est constitué de %d bouteilles.\n", appellation, region, anProd, nbBout);
    strncpy(region, "Bordeaux", LEN);
    strncpy(appellation, "Riesling", LEN);
    plusVieux (v, N, region, LEN, appellation, LEN, &anProd, &nbBout);
    printf("Le plus vieux cru de %s de %s date de %d et est constitué de %d bouteilles.\n", appellation, region, anProd, nbBout);
    return 0 ;
}

