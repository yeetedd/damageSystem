#include <iostream>
#include "CharacterBase.h"
#include "ModableProperty.h"
#include "ModInventory.h"
int main()
{
	CharacterBase character;
	character.AddProperty(ModableProperty("walking_speed", 10));
	character.AddProperty(ModableProperty("jump_height", 2));
	character.AddProperty(ModableProperty("hp", 100));
	character.AddProperty(ModableProperty("ultimate_cooldown", 200));
	character.AddProperty(ModableProperty("ultimate_damage", 1000));
	character.debug_PrintAllProperties();
	std::cout << std::endl;

	ModInventory modInventory(1);

	// for(int i = 0; i < 4; i++)
	// {
	// 	modInventory.equipedMods[i] = new ModPerk("", 1);
	// }
	// modInventory.equipedMods[0] = new ModPerk("hp", 100);
	// modInventory.equipedMods[1] = new ModPerk("walking_speed", 1.3f);
	//
	Mod* mod = new Mod();
	mod->sizeOfModPerks = 3;
	mod->modPerks = new ModPerk * [mod->sizeOfModPerks];

	mod->modPerks[0] = new ModPerk("jump_height", 5);
	mod->modPerks[1] = new ModPerk("walking_speed", 5);
	mod->modPerks[2] = new ModPerk("hp", 10);

	modInventory.equipedMods[0] = mod;

	modInventory.ApplyInventoryTo(character);


	
	// std::cout << std::endl;
	// std::cout << "Found property:" << std::endl;
	// ModableProperty* propertyWeWantToChange = character.GetPropertyWithName("walking_speed");
	// std::cout << propertyWeWantToChange->toStdString() << std::endl;
	//
	// std::cout << std::endl;
	// std::cout << "Changing property walking speed to 2 times faster" << std::endl;
	// propertyWeWantToChange->ApplyModyfier(2.0f);

	character.debug_PrintAllProperties();
	
	
	
	
	return 0;
}
