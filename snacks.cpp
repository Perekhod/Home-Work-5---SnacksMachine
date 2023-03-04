#include "snacks.h"
#include "machine.h"
#include "lotokSnacks.h"


    Snack::Snack(std::string in_snackname) : snackname(in_snackname)
    {
        snackname = in_snackname;
    }

    std::string Snack::get_snackname() const
    {
        return snackname;
    }