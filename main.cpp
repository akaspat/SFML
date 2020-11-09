#include <SFML/Graphics.hpp>

#include "include/Ellipse.h"
#include "include/Rectangle.h"
#include "include/Triangle.h"

#include "include/Circle.h"

#include "unistd.h"
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "Фигуры");

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color::White);

        Ellipse e(&window);
        e.setSize(50, 30);
        e.setColor(sf::Color::Green);
        e.setPos(50, 50);

        Rectangle r(&window);
        r.setSize(30, 50);
        r.setPos(65, 10);
        r.setColor(sf::Color::Blue);

        Circle c(&window);
        c.setSize(30);
        c.setColor(sf::Color::Red);
        c.setPos(150, 150);

        Triangle t(&window);
        t.setSize(sf::Vector2f(70, 70),
                  sf::Vector2f(130, 150),
                  sf::Vector2f(90, 50));
        t.setPos(130, 150);
        t.setColor(sf::Color::Yellow);

        e.toRender();
        r.toRender();
        c.toRender();
        t.toRender();

        window.display();
    }
    return 0;
}
