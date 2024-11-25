#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window with Circle");

    // Define RebeccaPurple background color (RGB: 102, 51, 153)
    sf::Color rebeccaPurple(102, 51, 153);

    // Create a circle with radius 100
    sf::CircleShape circle(100);
    circle.setFillColor(sf::Color::Green); // Set the fill color to green
    circle.setPosition(300, 200);          // Position the circle in the window

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close(); // Close window when requested
            }
        }

        // Clear the window with RebeccaPurple background color
        window.clear(rebeccaPurple);

        // Draw the circle
        window.draw(circle);

        // Display the contents of the window
        window.display();
    }

    return 0;
}
