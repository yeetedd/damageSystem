#include "ModInventory.h"

ModInventory::~ModInventory()
{
	// for(int i = 0; i < sizeOfInventory; i++)
	// {
	// 	delete equipedMods[i];
	// }
	// delete[] equipedMods;
}

ModInventory::ModInventory(int size)
{
	sizeOfInventory = size;
	equipedMods = new Mod*[size];
}

void ModInventory::ApplyInventoryTo(CharacterBase& character)
{
	Mod* currentMod;
	
	for(int i = 0; i < sizeOfInventory; i++)
	{
		currentMod = equipedMods[i];
		if(currentMod)
		{
			if(currentMod->sizeOfModPerks > 0)
			{
				for(int x = 0; x < currentMod->sizeOfModPerks; x++)
				{
					ModableProperty* modable = character.GetPropertyWithName(currentMod->modPerks[x]->nameOfStat);
					if (modable)
						modable->ApplyModyfier(equipedMods[i]->modPerks[x]->multiplyer);
				}
				
				
			}
			
		}
		// currentMod++;
	}
}
