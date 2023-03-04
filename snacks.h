#pragma once

#include <iostream>
#include <string>

class Snack
{
public:
    Snack(std::string in_snackname);
    std::string get_snackname() const;
   
private:
    std::string snackname;
};