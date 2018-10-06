#pragma once

#include "NPC.h"//include so it can inherit
#include <string>//include so that you can assign NPC a role

class Orc :public NPC //inherit from baseclass
{
private:
	//std::string _role = "";
	std::string _name = "Orkie";
public:
	Orc(/*std::string role*/) { //make your own constructor and 
								// = role;		//set the role to whatever was passed as an argument
								//render();
	};

	void render() {//show result
		std::cout << "Spawned orc: " + _name /*+ _role*/ << std::endl;
	}
};

