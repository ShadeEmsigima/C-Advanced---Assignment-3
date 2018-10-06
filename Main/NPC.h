#pragma once
#include <iostream>

class NPC
{
public:
	NPC();
	virtual ~NPC(); //why must this be virtual but not the constructor?
	virtual void render() = 0;
};

