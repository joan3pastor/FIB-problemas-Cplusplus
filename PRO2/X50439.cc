#include "Pila.hh"

node_pila* copia_node_pila_it(node_pila* m) 
/* Pre: cert */
/* Post: si m és NULL, el resultat és NULL; en cas contrari, el
    resultat apunta al primer node d'una cadena de nodes que són
    còpia de de la cadena que té el node apuntat per m com a primer */
{
    node_pila* node;
    node_pila* ultim;
    if (m == NULL) node = NULL;
    else {
        node = ultim = new node_pila;
        ultim->info = m->info;
        m = m->seguent;
        while (m != NULL) {
            ultim->seguent = new node_pila;
            ultim = ultim->seguent;
            ultim->info = m->info;
            m = m->seguent;
        }
        ultim->seguent = NULL;
    }
    return node;
}
      
Pila& operator=(const Pila& original) 
/* Pre: cert */
/* Post: El p.i. passa a ser una còpia d'original i qualsevol
    contingut anterior del p.i. ha estat esborrat (excepte si el
    p.i. i original ja eren el mateix objecte) */
{
    if (this == &original) return *this;
    else {
        altura = original.altura;
        primer_node = original.primer_node;
        return *this;
    }
}