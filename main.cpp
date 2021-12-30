
#include <SFML/Graphics.hpp>
#include "Board.h"

using namespace std;
using namespace sf;

Warrior operator/(Warrior &w, double const &c)
{
	return Warrior(w.team, w.life/c, w.force / c, w.defence / c);
}
int main()
{
	RenderWindow window(VideoMode(600, 600, 32), "Window");
	srand(time(NULL));
	Board board;

	while (window.isOpen())
	{
		board.update();

		window.clear();
		board.draw(window);
		window.display();
	}
}