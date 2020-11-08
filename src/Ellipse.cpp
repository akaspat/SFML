#include <cmath>
#include "../include/Ellipse.h"

Ellipse::Ellipse(sf::RenderWindow *w) {
    parentWindow_ = w;
    shape_ = new sf::ConvexShape();
    center_.x = 0; center_.y = 0;
}

void Ellipse::setSize(float a, float b) {
    if (a < b){
        std::swap(a, b);
    }

    // a - большая полуось
    // b - малая полуось
    shape_->setPointCount(a*4);

    // порядковый номер точки
    int index = 0;

    /*
     * формула эллипса
     *  x^2     y^2
     * ----- + ----- = 1
     *  a^2     b^2
     */
    for (float x = 0; x <= a; x++){
        float y = sqrt( ( 1.0 - ((x*x)/(a*a)) ) * b * b );

        // точка на верхней правой дуге
        shape_->setPoint(index, sf::Vector2f(center_.x + x, center_.y - y));
        // точка на нижней правой дуге
        shape_->setPoint(index+a, sf::Vector2f(center_.x + x, center_.y + y));
        // точка на нижней левой
        shape_->setPoint(index+a+a, sf::Vector2f(center_.x - x, center_.y + y));
        // точка на верхней левой дуге
        shape_->setPoint(index+a+a+a, sf::Vector2f(center_.x - x, center_.y - y));

        index++;
    }
}


Ellipse::~Ellipse() {
    delete shape_;
}