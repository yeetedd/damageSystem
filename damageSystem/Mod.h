#pragma once
#include "ModPerk.h"
struct Mod
{
	ModPerk** modPerks;
	int sizeOfModPerks;
	~Mod();
};
