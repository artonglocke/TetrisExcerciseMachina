#include "Game.h"

#include <vector>
#include "Shared_ptr.h"

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

struct foo
{
	foo() = default;
	~foo()
	{
		std::cout << "Destroy";
	}
};

int main()
{
	return Game{}.Run();
}