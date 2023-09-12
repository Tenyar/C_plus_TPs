#ifndef ENTIERCONTRAINT_H
#define ENTIERCONTRAINT_H

#include <iostream>
#include <limits>

using namespace std;

class EntierContraint {
public:
    
    // A COMPLETER
    EntierContraint(int valeur, int min, int max);

    int getMin();
    int getMax();
    int getVal();

    int setVal(int val);

    void saisir(istream & entree = cin);

    void afficher(ostream & sortie = cout);

private:

    // A COMPLETER
    int min;
    int max;
    int val;



    // Constantes de Classe (static) pour définir les valeurs par défaut des attributs d'un entier contraint
    static constexpr int VAL_DEF = 0;
    static constexpr int MIN_DEF = std::numeric_limits<int>::min(); // le plus petit int possible
    static constexpr int MAX_DEF = std::numeric_limits<int>::max(); // le plus grand int possible
};

#endif /* ENTIERCONTRAINT_H */

