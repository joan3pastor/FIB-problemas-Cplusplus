
static void  arbsuma_imm(node_arbreNari* n_original, node_arbreNari* &n_suma, int &sum) {
    if (n_original == NULL) sum = 0;
    else {
        n_suma = new node_arbreNari;
        n_suma->seg = vector<node_arbreNari*> (n_original->seg.size());
        int suma_total = n_original->info;
        for (int i = 0; i < n_original->seg.size(); ++i) {
            int aux = 0;
            node_arbreNari* node_aux = NULL;
            n_suma->seg[i] = node_aux; 
            arbsuma_imm(n_original->seg[i], n_suma->seg[i], aux); ////
            suma_total += aux; 
        }
        n_suma->info = suma_total;
        sum = suma_total;
    }
}


void arbsuma(ArbreNari& asum) const
/* Pre: cert */
/* Post: asum és l'arbre suma del p.i. */
{
    int sum;
    node_arbreNari* nsum = NULL; 
    arbsuma_imm(this->primer_node, nsum, sum);
    asum.primer_node = nsum;
}