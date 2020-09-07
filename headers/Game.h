#pragma once

#include <SFML/Graphics.hpp>
#include "Grid.h"

class Game
{
public:
	Game();
	~Game();
	int Run();
	
private:
	void Update();
	void ClearEvents();

private:
	sf::RenderWindow m_window;
	Grid m_grid;
};
