static void freq_immersive(node_arbreGen* n, const T& x, int& cuenta) 
{
    if (n != NULL) {
        if (x == n->info) ++cuenta;
        for (int i = 0; i < n->seg.size(); ++i) {
            freq_immersive(n->seg[i], x, cuenta);
        }
    }
}

int freq(const T& x) const
{
    int cuenta = 0;
    freq_immersive(this->primer_node, x, cuenta);
    return cuenta;
}