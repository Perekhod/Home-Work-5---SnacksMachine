#pragma once

#include <iostream>
#include <string>

class Machine
{
public:
    Machine(short in_serialNumber, short in_slotCount);
   
    short get_serialNumber() const;

    /*void addSlot(LotokSnacks* in_Slot);*/

    void getEmplySlotsCount();
    void setEmplySlotsCount(short newCount);

   
private:
    short serialNumber;
    short slotCount;
  /*  LotokSnacks* freeSlot;*/
};