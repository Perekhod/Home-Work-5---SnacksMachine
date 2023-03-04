#include "snacks.h"
#include "machine.h"
#include "lotokSnacks.h"


	LotokSnacks::LotokSnacks(short in_slots) : slots(in_slots)
	{
		slots = in_slots;
	}

	void LotokSnacks::add_snack(Snack* in_snack)
	{
		content = in_snack;
	}