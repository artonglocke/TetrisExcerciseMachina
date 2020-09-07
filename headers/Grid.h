#pragma once
#include "Config.h"
#include "IShape.h"
#include <iostream>
#include <memory>

class Grid
{
public:
	Grid();
	~Grid();
	void Initialize();
	void Update();
	void Show();

private:
	int m_grid[GRID_WIDTH][GRID_HEIGHT];
	bool m_initialized;
	std::shared_ptr<IShape> m_current;
	std::shared_ptr<IShape> m_next;
};

