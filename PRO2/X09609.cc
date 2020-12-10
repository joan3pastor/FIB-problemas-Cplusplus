

static void sub_arrel_immersive(node_arbre* n, int nivell, const T& x, pair<node_arbre*,int>& trobat)
{
    if (n != NULL and (trobat.second == -1 or nivell < trobat.second)) {
        if ((n->info == x)) { //and (trobat.second > nivell) and (trobat.second != -1)
            trobat = make_pair(n, nivell);
        }
        sub_arrel_immersive(n->segE, nivell+1, x, trobat);
        sub_arrel_immersive(n->segD, nivell+1, x, trobat);
    }
}


 void sub_arrel(Arbre& asub, const T& x)
 /* Pre: p.i. = A, asub es buit */
 /* Post: si A conte x, asub es el subarbre d'A resultat de la cerca;
    si A no conte x, asub es buit */
{
    node_arbre* n_trobat = NULL;
    pair<node_arbre*, int> trobat = make_pair(n_trobat,-1);
    sub_arrel_immersive(this->primer_node, 0, x, trobat);
    if (trobat.second >= 0) {
        node_arbre* node = copia_node_arbre(trobat.first);
        asub.primer_node = node;
    } else asub.primer_node = NULL;
    
}
