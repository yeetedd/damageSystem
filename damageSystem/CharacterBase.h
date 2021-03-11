#pragma once
#include <vector>
#include <iostream>
#include "ModableProperty.h"

class CharacterBase
{
protected:
	std::vector<ModableProperty> modableProperties;
public:
	void AddProperty(ModableProperty modableProperty);
	void debug_PrintAllProperties();
	ModableProperty* GetPropertyWithName(std::string propetyName)
	{
		for(int i = 0; i < modableProperties.size(); i++)
		{
			if (propetyName == modableProperties[i].GetName())
				return &modableProperties[i];
		}
		return nullptr;
	}
	
};
