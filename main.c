#include "Dinic.h"


int main(void) {
    printf("Saisissez le nom du fichier contenant le réseau initial.");
    FILE DINIC;
    scanf("%s", &DINIC);
    
    tabSommetsGR R;
    int source, sink, n;
    
    buildGraph(DINIC, R, &source, &sink, &n);
    
    int f = 0;
    dinic(tabSommetsGR R, &f, int source, int sink, int n)
    printf("Le flot est passé de 0 à %d", f);
    
    return 0;
}
