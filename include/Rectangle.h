#ifndef SFML_RECTANGLE_H
#define SFML_RECTANGLE_H

#include <SFML/Graphics.hpp>
#include "Shape.h"

class Rectangle : public Shape{
public:
    Rectangle(sf::RenderWindow*);
    void setSize(float, float);
    ~Rectangle();
};


#endif //SFML_RECTANGLE_H
