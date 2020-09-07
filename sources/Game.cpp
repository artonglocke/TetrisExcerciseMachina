#include "Game.h"
#include <cstdlib>

#include <thread>
#include <chrono>

Game::Game()
	: m_window{sf::VideoMode{800,600}, "Tetris"}
	, m_grid{}
{
	m_grid.Initialize();
}


Game::~Game()
{
}

int Game::Run()
{
	while (m_window.isOpen())
	{
		ClearEvents();

		Update();

		m_window.clear(sf::Color::Red);
		//m_window.draw();
		m_window.display();
	}

	return 0;
}

void Game::Update()
{
	std::cout << "Game is running!" << std::endl;
	m_grid.Update();
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

void Game::ClearEvents()
{
	sf::Event e;

	while (m_window.pollEvent(e))
	{
		if (e.type == sf::Event::Closed)
			m_window.close();
	}
}
