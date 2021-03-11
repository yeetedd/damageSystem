#include "ModInventory.h"

ModInventory::~ModInventory()
{
	delete[] equipedMods;
}

ModInventory::ModInventory(int size)
{
	equipedMods = new Mod*[size];
}
