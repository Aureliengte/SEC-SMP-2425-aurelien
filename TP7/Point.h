#pragma once

class point{
private :
    float x; // abscisse
    float y; // ordonnee
public :
    // Constructeur
    point();
    point(float x, float y);

    // Methodes
    void translater(point A);
    void translater(float new_x, float new_y);
    void copy(point const& a);

    // Accesseurs
    float getAbscisse();
    float getOrdonnee();

    // Mutateurs
    void setAbscisse(float new_x);
    void setOrdonnee(float new_y);
};