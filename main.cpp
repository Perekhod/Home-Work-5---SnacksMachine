#include "machine.h"
#include "snacks.h"
#include "lotokSnacks.h"


int main()
{
	setlocale(LC_ALL, "ru");

	Snack* bounty		= new Snack("Bounty");
	Snack* snikers		= new Snack("Snikers");
	LotokSnacks* slot	= new LotokSnacks(10);
	slot->add_snack(bounty);
	slot->add_snack(snikers);
	Machine* oneMachine	= new Machine(0001, 50);
	/*oneMachine->addSlot(slot);*/

	oneMachine->getEmplySlotsCount();
	oneMachine->setEmplySlotsCount(100);
	oneMachine->getEmplySlotsCount();

	delete bounty;
	delete snikers;
	delete slot;
	delete oneMachine;
}