#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "SFML window");

    // Load a sprite to display
    const sf::Texture player("Player.png");
    sf::Sprite sprite(player);


    // Create a graphical text to display
     //const sf::Font font("ARIAL.ttf");
     //sf::Text text(font, "WIP", 25);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
         // window.draw(text);

        // Update the window
        window.display();
    }
}