#pragma once
#include "IShape.h"
#include <iostream>
class Hero : public IShape
{
public:
	Hero();
	~Hero();

	void Show();
};

