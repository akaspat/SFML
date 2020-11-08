#ifndef SFML_ELLIPSE_H
#define SFML_ELLIPSE_H

#include <SFML/Graphics.hpp>

class Ellipse {
    sf::ConvexShape* shape_;
    sf::Vector2f center_;
    sf::RenderWindow* parentWindow_;

public:
    Ellipse(sf::RenderWindow*);
    void setSize(float, float);
    void setColor(int, int, int);
    void setColor(sf::Color);
    void setPos(float, float);

    void toRender();
    ~Ellipse();
};

#endif //SFML_ELLIPSE_H
