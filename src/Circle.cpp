#include "../include/Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(sf::RenderWindow *w) {
    parentWindow_ = w;
    shape_ = std::make_shared<sf::ConvexShape>(36);
    center_.x = 0; center_.y = 0;
}

void Circle::setSize(float r) {
    radius = r;
    float x, y;

    for (int i=0; i < 360; i+=10){
        x = radius * cos(i * M_PI / 180);
        y = radius * sin(i * M_PI / 180);
        shape_->setPoint(i / 10, sf::Vector2f(x,y));
    }
}

float Circle::getRadius() {
    return radius;
}

std::string Circle::shapeType() {
    return "Circle";
}


