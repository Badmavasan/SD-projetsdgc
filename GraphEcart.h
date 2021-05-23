/* GrapheEcart.h */


#define NIL_lge (struct liste_graph_ecart *) 0
#define NIL_mge (struct maillon_graph_ecart *) 0

struct maillon_graph_ecart {
    int id;
    int flot_entrant;
    struct maillon_graph_ecart* next;
};

struct liste_graph_ecart {
    int id;
    struct maillon_graph_ecart* head;
};
