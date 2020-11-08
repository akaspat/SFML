#ifndef SFML_CIRCLE_H
#define SFML_CIRCLE_H

#include <SFML/Graphics.hpp>
#include "Ellipse.h"

class Circle : public Ellipse {
    float radius;
public:
    Circle(sf::RenderWindow*);
    void setSize(float r);
    float getRadius();
    std::string shapeType() override;
    ~Circle() {};
};

#endif //SFML_CIRCLE_H
