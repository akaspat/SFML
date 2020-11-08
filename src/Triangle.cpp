#include "../include/Triangle.h"

Triangle::Triangle(sf::RenderWindow* w) {
    this->parentWindow_ = w;
    this->shape_ = std::make_shared<sf::ConvexShape>(3);
    this->center_.x = 0; this->center_.y=0;
}

void Triangle::setSize(const sf::Vector2f &a,
                       const sf::Vector2f &b,
                       const sf::Vector2f &c) {
    shape_->setPoint(0, a);
    shape_->setPoint(1, b);
    shape_->setPoint(2, c);
}

std::string Triangle::shapeType() {
    return "Triangle";
}
