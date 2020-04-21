#include "manager.h"

manager::manager( int year,  char *name,  char *surname, int number):employee(year, name, surname)
{
    setNumber(number);
}
manager::manager():manager(0,"none","none",0){}
manager::manager( manager&c):manager(c.year, c.name, c.surname, c.number){}
void manager::setNumber(int number)
{
    this->number=number;
}
int manager::getNumber() const
    {
        return number;
    }

     void manager::print()const

{
    cout << "year = " << year << "\tname = "<< name << "\tsurname = " << surname << "\tnumber="<<number<<endl;}
