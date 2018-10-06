#include "stdafx.h"
#include "Shaman.h"

#include <iostream>


Shaman::Shaman(NPC* npctje) : Decorator(npctje)
{
	//render();
}


void Shaman::render() 
{
	Decorator::render();
	std::cout << "Assigned role: Shaman" << std::endl;
}
