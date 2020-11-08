#ifndef SFML_TRIANGLE_H
#define SFML_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
public:
    Triangle(sf::RenderWindow*);
    void setSize(const sf::Vector2f&, const sf::Vector2f&, const sf::Vector2f&);
    std::string shapeType() override;
    ~Triangle() {};
};


#endif //SFML_TRIANGLE_H
