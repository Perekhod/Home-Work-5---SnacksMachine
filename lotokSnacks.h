#pragma once

#include <iostream>
#include <string>

class LotokSnacks
{
public:

	LotokSnacks(short in_slots);
	
	void add_snack(Snack* in_snack);
	
private:
	Snack* content;
	short slots;
};