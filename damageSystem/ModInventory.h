#pragma once
#include "Mod.h"
#include "CharacterBase.h"

class ModInventory
{
	int sizeOfInventory;
public:
	Mod** equipedMods;

public:
	ModInventory(int size);
	int GetSize() const
	{
		return sizeOfInventory;
	}
	~ModInventory();


	void ApplyInventoryTo(CharacterBase& character);

};

