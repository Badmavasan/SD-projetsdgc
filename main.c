#include "Dinic.h"


int main(void) {
    printf("Saisissez le nom du fichier contenant le réseau initial.");
    FILE DINIC;
    scanf("%s", &DINIC);
    
    tabSommetsGR R;
    int source, sink, n;
    
    buildGraph(DINIC, R, &source, &sink, &n);
    
    int f = 0;
    
    
    return 0;
}
