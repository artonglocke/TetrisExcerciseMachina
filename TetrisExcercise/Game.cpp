#include "Game.h"

Game::Game()
{
}


Game::~Game()
{
}

void Game::Update()
{
	std::cout << "Game is running!" << std::endl;
}

void Game::Start()
{
	m_isRunning = true;
}
