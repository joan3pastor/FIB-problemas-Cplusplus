

static void maxim_imm(node_arbreNari* node, int &max) {
    if (node != NULL) {
        if (node->info > max) max = node->info;
        for (int i = 0; i < node->seg.size(); ++i) {
            maxim_imm(node->seg[i], max);
        }
    } 
}


T maxim() const
/* Pre: el p.i. no és buit */
/* Post: el resultat indica el valor més gran que conté el p.i. */
{
    int max = this->primer_node->info;
    maxim_imm(this->primer_node, max);
    return max;
}