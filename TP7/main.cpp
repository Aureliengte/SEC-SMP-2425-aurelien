#include <iostream>
#include "Point.h"

using namespace std;

int main(){

    point A = point();
    point B = point(7, 9);

    cout << "Coordonnees de A : (" << A.getAbscisse() << "," << A.getOrdonnee() << ")" << endl;

    A.translater(1, 4);
    cout << "Coordonnees de A : (" << A.getAbscisse() << "," << A.getOrdonnee() << ")" << endl;

    A.translater(A);
    cout << "Coordonnees de A : (" << A.getAbscisse() << "," << A.getOrdonnee() << ")" << endl;

    A.setAbscisse(3.4);
    A.setOrdonnee(5.2);
    cout << "Coordonnees de A : (" << A.getAbscisse() << "," << A.getOrdonnee() << ")" << endl;

    A.copy(B);
    cout << "Coordonnees de A : (" << A.getAbscisse() << "," << A.getOrdonnee() << ")" << endl;

    return 0;
}