#include "Point.h"

// ---------- Constructeurs ----------
point::point():x(0),y(0){}
point::point(float x, float y):x(x),y(y){}

// ---------- Methodes ----------

// Translater un point a partir des coordonnees d'un point
void point::translater(point A){
    this->x += A.getAbscisse();
    this->y += A.getOrdonnee();
}

// Translater un point a partir d'un x et d'un y
void point::translater(float new_x, float new_y){
    x += new_x;
    y += new_y;
}

// Copier les coordonnees d'un point sur un autre point
void point::copy(point const& a){
    x = a.x;
    y = a.y;
}

// ---------- Accesseurs ----------

// Recuperer l'abscisse d'un point
float point::getAbscisse() const { return x; }

// Recuperer l'ordonnee d'un point
float point::getOrdonnee() const { return y; }

// ---------- Mutateurs ----------

// Modifier l'abscisse d'un point
void point::setAbscisse(float new_x){x = new_x;}

// Modifier l'ordonnee d'un point
void point::setOrdonnee(float new_y){y = new_y;}

// ---------- Operateurs ----------

// Surcharge l'operateur +=
void point::operator+=(point const& a){
    x += a.x;
    y += a.y;
}

// Surcharge l'operateur <<
ostream& operator<<(ostream& s, point const& a){
    s << a.getAbscisse() << " , " << a.getOrdonnee();
    return s;
}