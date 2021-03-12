#pragma once
#include <string>
struct ModPerk
{
	ModPerk(const std::string& name_of_stat, float multiplyer)
		: nameOfStat(name_of_stat),
		  multiplyer(multiplyer)
	{
	}

	std::string nameOfStat;
	float multiplyer;
};

