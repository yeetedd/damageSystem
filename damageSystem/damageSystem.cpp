#include <iostream>
#include "CharacterBase.h"
#include "ModableProperty.h"
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
	std::cout << "Found property:" << std::endl;
	ModableProperty* propertyWeWantToChange = character.GetPropertyWithName("walking_speed");
	std::cout << propertyWeWantToChange->toStdString() << std::endl;

	std::cout << std::endl;
	std::cout << "Changing property walking speed to 2 times faster" << std::endl;
	propertyWeWantToChange->ApplyModyfier(2.0f);

	character.debug_PrintAllProperties();
	
	
	
	
	return 0;
}
