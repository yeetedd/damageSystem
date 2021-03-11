#pragma once
#include "Mod.h"

class ModInventory
{
private:
	Mod** equipedMods;
	~ModInventory();

public:
	ModInventory(int size);

};

