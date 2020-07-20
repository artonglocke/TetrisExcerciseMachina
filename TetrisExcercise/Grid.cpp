#include "Grid.h"



Grid::Grid()
{
}


Grid::~Grid()
{
}

void Grid::Initialize()
{
	if (!m_initialized)
		return;

	m_initialized = true;
	for (size_t i = 0; i < GRID_HEIGHT; i++)
	{
		for (size_t j = 0; j < GRID_WIDTH; j++)
		{
			m_grid[i][j] = 0;
		}
	}
}

void Grid::Show()
{
	std::cout << "--------------------------------------* Current grid layout *--------------------------------------" << std::endl;
	for (size_t i = 0; i < GRID_HEIGHT; i++)
	{
		for (size_t j = 0; j < GRID_WIDTH; j++)
		{
			std::cout << m_grid[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------* END *--------------------------------------" << std::endl;

}
