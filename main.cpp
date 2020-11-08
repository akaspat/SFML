#include <SFML/Graphics.hpp>

#include "include/Ellipse.h"
#include "include/Rectangle.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "Фигуры");

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color(255, 255, 255));

        Ellipse e(&window);
        e.setSize(50, 30);
        e.setColor(sf::Color::Green);
        e.setPos(50, 50);

        Rectangle r(&window);
        r.setSize(30, 50);
        r.setPos(65, 10);
        r.setColor(sf::Color::Blue);

        e.toRender();
        r.toRender();
        window.display();
    }
    return 0;
}
