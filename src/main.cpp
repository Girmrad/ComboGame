#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "ComboGame");
	App.SetFramerateLimit(60.0f);

	sf::Font Font;
	if (!Font.LoadFromFile("/usr/share/fonts/TTF/arial.ttf"))
		; // Error...

	sf::String Text("Hello", Font, 12);

	sf::Image AirImage;
	if (!AirImage.LoadFromFile("images/air.jpg"))
		; // Error...

	sf::Image EarthImage;
	if (!EarthImage.LoadFromFile("images/earth.jpg"))
		; // Error...

	sf::Image WaterImage;
	if (!WaterImage.LoadFromFile("images/water.jpg"))
		; // Error...

	sf::Image FireImage;
	if (!FireImage.LoadFromFile("images/fire.jpg"))
		; // Error...

	sf::Sprite AirSprite;
	AirSprite.SetImage(AirImage);
	AirSprite.SetX(200.f);

	sf::Sprite EarthSprite;
	EarthSprite.SetImage(EarthImage);
	EarthSprite.SetX(200.f);
	EarthSprite.SetY(100.f);

	sf::Sprite WaterSprite;
	WaterSprite.SetImage(WaterImage);
	WaterSprite.SetX(200.f);
	WaterSprite.SetY(200.f);

	sf::Sprite FireSprite;
	FireSprite.SetImage(FireImage);
	FireSprite.SetX(200.f);
	FireSprite.SetY(300.f);

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

		}

		App.Draw(Text);

		App.Draw(AirSprite);
		App.Draw(EarthSprite);
		App.Draw(WaterSprite);
		App.Draw(FireSprite);

		App.Display();
	}

	return 0;
}
