#include "stdafx.h"
#include "Soldier.h"

#include <iostream>


Soldier::Soldier(NPC* npctje) : Decorator(npctje)
{

}


void Soldier::render()
{
	Decorator::render();
	std::cout << "Assigned role: Soldier" << std::endl;
}
