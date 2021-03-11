#include "ModableProperty.h"

void ModableProperty::ChangeBaseValue(int newBaseValue)
{
	baseValue = newBaseValue;
}

void ModableProperty::ApplyModyfier(float modyfier)
{
	this->modyfier = modyfier;
}

int ModableProperty::GetValue()
{
	return baseValue * modyfier;
}

std::string ModableProperty::GetName()
{
	return name;
}

std::string ModableProperty::toStdString()
{
	std::string toReturn;
	toReturn += name + " value: ";
	toReturn += std::to_string(GetValue());
	return toReturn;
}
