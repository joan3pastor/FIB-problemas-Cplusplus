#include "Cua.hh"

void concat(Cua &c) 
/* Pre: c=C */
/* Post: el p.i. passa a ser la concatenacio de C al parametre implicit, c es buida */
{
    if (longitud == 0) {
        primer_node = c.primer_node;
        ultim_node = c.ultim_node;
        longitud = c.longitud;
    }
    else if (c.longitud > 0) {
        ultim_node->seguent = c.primer_node;
        ultim_node = c.ultim_node;
        longitud += c.longitud;
    }
 
    c.primer_node = NULL;
    c.ultim_node = NULL;
    c.longitud = 0;
}