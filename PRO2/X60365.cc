

static void buscar_immersive(node_arbreGen* n, bool &trobat, const T& x) 
{
    if (n != NULL) {
        if (n->info == x) trobat = 1;
        else {
            for (int i = 0; i < n->seg.size() and not trobat; ++i) {
                buscar_immersive(n->seg[i], trobat, x);
            }
        }
    }
}

bool buscar(const T& x) const
{
    bool trobat = 0;
    buscar_immersive(this->primer_node, trobat, x);
    return trobat;
}