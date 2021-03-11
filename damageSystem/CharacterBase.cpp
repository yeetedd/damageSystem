#include "CharacterBase.h"

void CharacterBase::AddProperty(ModableProperty modableProperty)
{
	modableProperties.push_back(modableProperty);
}

void CharacterBase::debug_PrintAllProperties()
{
	std::cout << "Pritiong out properties" << std::endl;

	for (int i = 0; i < modableProperties.size(); i++) {
		std::cout << modableProperties[i].toStdString() << std::endl;
	}
}
