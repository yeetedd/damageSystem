#pragma once
#include <string>

class ModableProperty
{
protected:
	std::string name;
	int baseValue;
public:
	ModableProperty(const std::string& name, int base_value)
		: name(name),
		  baseValue(base_value)
	{
	}

protected:
	float modyfier = 1.0f;
public:
	void ChangeBaseValue(int newBaseValue);
	void ApplyModyfier(float modyfier);
	int GetValue();
	std::string GetName();
	std::string toStdString();
};
