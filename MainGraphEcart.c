/* MainGraphEcart.c */
int main() {
    FILE* DIMACS;
    tabSommetsGR T;
    int source;
    int sink;
    int n;
    buildGraph(DIMACS, T, source, sink, n);
    return 0;
}
