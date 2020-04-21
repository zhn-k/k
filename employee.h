#pragma once
#include "person.h"

class employee : public person
{
public:
    employee();
    employee(employee &cl);
    employee(int year, char *name, char *surname );

 virtual void print()=0;
    friend bool operator > ( const employee  &person0,  const employee  &person01);
    friend bool operator <= (const employee  &person0, const employee  &person01);
    friend bool operator < (const employee  &person0, const employee  &person01);
    friend bool operator >= (const employee  &person0, const employee  &person01);
    friend bool operator != (const employee  &person0, const employee  &person01);
    friend bool operator == (const employee  &person0, const employee  &person01);

};
