#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main(){
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "ComboGame");
	while (App.IsOpened())
{
    sf::Event Event;
    while (App.GetEvent(Event))
    {
        // Window closed
        if (Event.Type == sf::Event::Closed)
            App.Close();

        // Escape key pressed
        if ((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Escape))
            App.Close();

			App.Display();

			sf::Font Font;

			if (!Font.LoadFromFile("/usr/share/fonts/TTF/arial.ttf"))
				{
   					 // Error...
				}


			sf::String Text("Hello", Font, 12);

			App.Draw(Text);
	}
}
	return 0;
}
