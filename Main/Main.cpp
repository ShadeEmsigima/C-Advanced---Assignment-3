#include "stdafx.h"

#include <vector>
#include "NPC.h" //include all the subclasses so that u can use them -_-
#include "Elf.h"
#include "Orc.h"
#include "Decorator.h"
#include "Shaman.h"
#include "Soldier.h"
#include "Farmer.h"


void render(std::vector<NPC*> NPCs) { 
	//Make another render function to call it in here, NOT in the subclasses!
	//This makes sure you can use the render() of the subclass currently in question, right?
	for (auto& NPC : NPCs) {
		std::cout << "---" << std::endl;
		NPC->render();
	}
	std::cout << "---" << std::endl;
}

int main()
{
	std::vector<NPC*> NPCs;

	//Normal elf
	NPC* plainNPC = new Elf();
	NPCs.push_back(plainNPC);

	//Role assigned NPCs
	NPC* assignedNPC1 = new Shaman(new Elf());
	NPCs.push_back(assignedNPC1);

	NPC* assignedNPC2 = new Soldier(new Orc());
	NPCs.push_back(assignedNPC2);

	NPC* assignedNPC3 = new Farmer(new Elf());
	NPCs.push_back(assignedNPC3);


	//Now render them all. The render() will go through all of the elements
	//in the vector like we told it to above main()
	render(NPCs);

	std::cout << std::endl;

	//delete everything u made
	delete plainNPC;
	delete assignedNPC1;
	delete assignedNPC2;
	delete assignedNPC3;

	system("PAUSE");
}