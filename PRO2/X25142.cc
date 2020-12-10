 
/*

static T max_suma_cami_immersive(node_arbreGen* n)
{
    T suma = 0;
    if (n != NULL) {
        T suma = n->info;
        T max, aux;
        for (int i = 0; i < n->seg.size(); ++i) {
            aux = max_suma_cami_immersive(n->seg[i]);
            if (aux > max) max = aux;
        }
        suma = suma + max;
    } 
    return suma;
}

*/

static T max_suma_cami_imm(node_arbreGen* n) {
        T max = 0;
        if (n != NULL) {
                max = n->info;
                T maxsubcami = 0;
                for (int i = 0; i < n->seg.size(); ++i) {
                        T sumacami = max_suma_cami_imm(n->seg[i]);
                        if (sumacami > maxsubcami) maxsubcami = sumacami;
                }
                max += maxsubcami;
        }
        return max;
}





T max_suma_cami() const
{
    return max_suma_cami_imm(this->primer_node);
}
