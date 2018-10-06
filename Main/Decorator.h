#pragma once

#include "NPC.h"//so that u can inherit

class Decorator : public NPC //so u can inheit stuff from baseclass
{
	NPC* _theNPC;//make a NPC pointer called theNPC
public:
	Decorator(NPC* npctje);//when being constructed it needs a NPC pointer. were gonna 
						   //refer to it as "npctje"
	virtual ~Decorator(); //are we making a virtual decorator because the deconstructor differs per role?
	virtual void render(); //why do we not have to say "= 0;" here?
};

