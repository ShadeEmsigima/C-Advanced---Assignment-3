#pragma once

#include "Decorator.h"

class Farmer : public Decorator
{

public:
	Farmer(NPC* npctje);
	void render();
};

