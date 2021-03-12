#include "CharacterBase.h"

void CharacterBase::AddProperty(ModableProperty modableProperty)
{
	modableProperties.push_back(modableProperty);
}

void CharacterBase::debug_PrintAllProperties()
{
	std::cout << "Printing out properties" << std::endl;

	for (int i = 0; i < modableProperties.size(); i++) {
		std::cout << modableProperties[i].toStdString() << std::endl;
	}
}

ModableProperty* CharacterBase::GetPropertyWithName(std::string propetyName)
{
	for (int i = 0; i < modableProperties.size(); i++)
	{
		if (propetyName == modableProperties[i].GetName())
			return &modableProperties[i];
	}
	return nullptr;
}
