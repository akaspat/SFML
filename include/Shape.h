#ifndef SFML_SHAPE_H
#define SFML_SHAPE_H

#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <memory>

class Shape {

protected:
    std::shared_ptr<sf::ConvexShape> shape_;
    sf::Vector2f center_;
    sf::RenderWindow* parentWindow_;
public:
    virtual std::string shapeType()=0;

    virtual void setSize() {};
    virtual void setColor(int, int, int);
    virtual void setColor(sf::Color);
    virtual void setPos(float, float);
    virtual void toRender();

    virtual ~Shape() {};
};


#endif //SFML_SHAPE_H
