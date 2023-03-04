#pragma once

#include <iostream>
#include <string>

class Machine
{
public:
    Machine(short in_serialNumber, short in_slotCount);

    short get_serialNumber() const;

    void add_Slot(LotokSnacks* in_Slot);

    void get_EmplySlotsCount();


private:
    short serialNumber;
    short slotCount;
    LotokSnacks* freeSlot;
};