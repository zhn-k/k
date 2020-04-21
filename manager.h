#pragma once
#include "employee.h"

class manager: public employee
{
private:
   int number;
public:
manager();
 manager(manager &cl);
    manager(int year, char *name, char *surname, int namber);
    void setNumber(int);
      int getNumber()const;
  void print()override const;

};

