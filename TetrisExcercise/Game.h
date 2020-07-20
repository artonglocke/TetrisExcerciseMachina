#pragma once

#include <iostream>
class Game
{
public:
	Game();
	~Game();
	void Update();
	void Start();
	bool IsRunning() { return m_isRunning; };

private:
	bool m_isRunning;
};
