#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML with MSYS2");

    // Create a circle shape
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color::Green);

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Draw the circle
        window.draw(shape);

        // Display the current frame
        window.display();
    }

    return 0;
}
