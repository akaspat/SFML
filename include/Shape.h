#ifndef SFML_SHAPE_H
#define SFML_SHAPE_H

#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Shape {

protected:
    sf::ConvexShape* shape_;
    sf::Vector2f center_;
    sf::RenderWindow* parentWindow_;
public:
    virtual void setSize(float, float)=0;

    virtual void setColor(int, int, int);
    virtual void setColor(sf::Color);
    virtual void setPos(float, float);
    virtual void toRender();
};


#endif //SFML_SHAPE_H
