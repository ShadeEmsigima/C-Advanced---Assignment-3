#pragma once

#include "Decorator.h" //so that u can inherit its public things

class Shaman : public Decorator
{

public:
	Shaman(NPC* npctje);//OMG it knows what NPC is! Is that because shaman inherited from decorator.h
	//and that inherited from NPC.h?
	//It also means whenever you call a shaman object, u must tellif its an orc or elf, right?
	//~Shaman(); I dont understand why there is no constructor here

	//why did teacher put /*virtual*/ in his example here?
	void render();
};

