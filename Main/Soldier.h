#pragma once

#include "Decorator.h"

class Soldier : public Decorator
{

public:
	Soldier(NPC* npctje);
	void render();
};

