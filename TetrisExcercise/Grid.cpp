#include "Grid.h"
#include "BlueRicky.h"



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
	m_current = nullptr;
	m_next = nullptr;
	for (size_t i = 0; i < GRID_WIDTH; i++)
	{
		for (size_t j = 0; j < GRID_HEIGHT; j++)
		{
			m_grid[i][j] = 0;
		}
	}
}

void Grid::Update()
{
	// grid update logic
	if (m_current == nullptr)
		m_current = new BlueRicky();
	m_current->Update();
	for (auto it : m_current->LastIndices())
	{
		m_grid[it.first][it.second] = 0;
	}

	for (auto it : m_current->CurrentIndices())
	{
		m_grid[it.first][it.second] = 1;
	}
	if (m_current->IsEndReached())
	{
		m_current = new BlueRicky();
	}
	Show();
}

void Grid::Show()
{
	system("CLS");
	std::cout << "--------------------------------------* Current grid layout *--------------------------------------" << std::endl;
	for (size_t i = 0; i < GRID_HEIGHT; i++)
	{
		for (size_t j = 0; j < GRID_WIDTH; j++)
		{
			std::cout << m_grid[j][i];
		}
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------* END *--------------------------------------" << std::endl;

}
