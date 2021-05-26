#include <stdio.h>
#include <ctype.h>
#include "Dinic.h"

int main(void) {
    printf("Saisissez le nom du fichier contenant le réseau initial.");
    char fichier_dinic [50];
    // scanf("%s", fichier_dinic);
    strcpy(fichier_dinic, "network900.max");
    int source, sink, nb_sommets,nb_arcs;

    struct liste_graph_reseau* tabReseau = buildGraph(fichier_dinic, &source, &sink, &nb_sommets, &nb_arcs);

    int f = 0;
    dinic(tabReseau, &f, source, sink,nb_sommets);
    printf("Le flot est passé de 0 à %d\n", f);
    renderResult("result.txt",tabReseau,nb_sommets,nb_arcs,source,sink,f);

    clear_liste_graph_reseau(tabReseau,nb_sommets);
    return 0;
}
