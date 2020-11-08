#ifndef SFML_ELLIPSE_H
#define SFML_ELLIPSE_H

#include <SFML/Graphics.hpp>
#include "Shape.h"

class Ellipse : public Shape {
public:
    Ellipse(sf::RenderWindow*);
    void setSize(float, float);
    ~Ellipse();
};

#endif //SFML_ELLIPSE_H
