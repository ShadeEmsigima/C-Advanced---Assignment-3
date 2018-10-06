#include "stdafx.h"
#include "Decorator.h"


Decorator::Decorator(NPC* npctje)
{
	_theNPC = npctje; //the NPC pointer is now equal to another NPC pointer called npctje.
					 //So now they both point at the same thing!
}

void Decorator :: render() 
{
	_theNPC->render();
	//Now I am asking that whatever obj the pointer was pointing at, now renders itself.
	//but these pointers were pointing at an NPC type obj, but they dont even have a constructor?
	//Does this mean they take the render() from either orc or elf? If so, I dont see how it is
	//linked other than everyone inherited from NPC. How is this subclass linked to subclass elf/orc?
}

Decorator::~Decorator()
{
	if (_theNPC) delete _theNPC; //I still cant figure out what this means?
}
