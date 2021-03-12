#include "Mod.h"

Mod::~Mod()
{
	for (int i = 0; i < sizeOfModPerks; i++)
		delete modPerks[i];
	delete[] modPerks;
}
