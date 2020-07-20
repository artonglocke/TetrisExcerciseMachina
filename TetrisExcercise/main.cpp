#include "Game.h"
#include "Hero.h"
// Tetris
// Grid
// Shape
// Moving po gridu {in bounds}
// Rotation po gridu {in bounds}
// Block destruction
// Score
// Game over scenario
// Difficulty increase
// Speed up

// Game {Difficulty increase, Score, Gameover scenario}
// Grid {Popunjavanje grida, block desctruction, validirati moving i rotation}
// Shape {Grid oblik, moving i rotation mehanika}

int main()
{
	/*Game game = Game();
	game.Start();
	while (game.IsRunning())
	{
		game.Update();
	}*/

	Hero shape = Hero();
	shape.Show();

	std::cout << "***************************************************************" << std::endl;
	shape.Rotate();
	shape.Show();
	std::cout << "***************************************************************" << std::endl;
	shape.Rotate();
	shape.Show();
	std::cout << "***************************************************************" << std::endl;
	shape.Rotate();
	shape.Show();
	std::cout << "***************************************************************" << std::endl;
	shape.Rotate();
	shape.Show();

	std::cin.get();
}