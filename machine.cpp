#include "snacks.h"
#include "machine.h"
#include "lotokSnacks.h"


    Machine::Machine(short in_serialNumber, short in_slotCount)
    {
        serialNumber = in_serialNumber;
        slotCount = in_slotCount;
    }

    short Machine::get_serialNumber() const
    {
        return serialNumber;
    }

    void Machine::add_Slot(LotokSnacks* in_Slot)
    {
        freeSlot = in_Slot;
    }

    void Machine::get_EmplySlotsCount()
    {
        std::cout<<"Пустых слотов в машине = " << slotCount << std::endl;
    }