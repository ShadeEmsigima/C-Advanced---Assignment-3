#include "stdafx.h"
#include "Farmer.h"

#include <iostream>


Farmer::Farmer(NPC* npctje) : Decorator(npctje)
{

}


void Farmer::render()
{
	Decorator::render();
	std::cout << "Assigned role: Farmer" << std::endl;
}
