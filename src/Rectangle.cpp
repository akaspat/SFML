#include "../include/Rectangle.h"

Rectangle::Rectangle(sf::RenderWindow *w) {
    parentWindow_ = w;
    shape_ = std::make_shared<sf::ConvexShape>(4);
    center_.x = 0; center_.y = 0;
}

void Rectangle::setSize(float w, float h) {
    // верхний левый угол прямоугольника
    shape_->setPoint(0, sf::Vector2f(center_.x - w/2, center_.y - h/2));
    // верхний правый угол прямоугольника
    shape_->setPoint(1, sf::Vector2f(center_.x + w/2, center_.y - h/2));
    // нижний правый угол прямоугольника
    shape_->setPoint(2, sf::Vector2f(center_.x + w/2, center_.y + h/2));
    // нижний левый угол прямоугольника
    shape_->setPoint(3, sf::Vector2f(center_.x - w/2, center_.y + h/2));
}

std::string Rectangle::shapeType() {
    return "Rectangle";
}

