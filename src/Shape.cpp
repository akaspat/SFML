#include "../include/Shape.h"

void Shape::setColor(int r, int g, int b) {
    shape_->setFillColor(sf::Color(r, g, b));
}

void Shape::setColor(sf::Color color) {
    shape_->setFillColor(color);
}

void Shape::setPos(float x, float y) {
    center_.x = x;
    center_.y = y;

    shape_->move(center_);
}

void Shape::toRender() {
    if (parentWindow_ == nullptr){
        // error log or message or exception
        return;
    }
    parentWindow_->draw(*shape_);
}

