#include "employee.h"

employee::employee(int year,  char *name,  char *surname):person(year, name, surname){}
employee::employee():employee(0,"none","none"){}
employee::employee( employee&c):employee(c.year, c.name, c.surname){}


     void employee::print()const
{
    cout << "year = " << year << "\tname = "<< name << "\tsurname = " << surname << endl;
}

   bool operator> (const employee &person0, const employee  &person01)
{
    return (person0.year > person01.year);
}

bool operator>= (const employee  &person0, const employee  &person01)
{
    return (person0.year >= person01.year);
}

bool operator< (const employee  &person0, const employee  &person01)
{
    return (person0.year < person01.year);
}

bool operator<= (const employee  &person0, const employee  &person01)
{
    return (person0.year <= person01.year) ;
}
bool operator== (const employee  &person0, const employee  &person01)
{
    return (person0.year == person01.year);
}

bool operator!= (const employee  &person0, const employee  &person01)
{
    return (person0.year != person01.year) ;}
