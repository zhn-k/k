#pragma once
#include "employee.h"

class coder: public employee
{
private:
   char *name_project;
public:
    coder();
    coder(coder &cl);

    coder(int year, char *name, char *surname, char *name_project);
    void setName_project(char *);
    char *getName_project(char *)const;
  void print()override const;

};


