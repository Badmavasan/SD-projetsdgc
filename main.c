#include <stdio.h>
#include <ctype.h>
#include "GraphReseau.h"

int main ()
{
    int source;
    int sink;
    int nb_sommets;
    nb_sommets = get_nb_sommets_from_file("net1.txt");
    struct liste_graph_reseau tabsommetsres[nb_sommets];
    buildGraph("net1.txt",tab,source,sink,nb_sommets);
    return 0;
}
