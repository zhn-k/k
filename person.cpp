
#include "person.h"
using namespace std;


person::person( int year,  char *name,  char *surname)
{
  this->name = 0;
    this->surname = 0;

  setName(name);
  setSurname(surname);
  setYear(year);
}


person::person( person&p):person(p.year, p.name, p.surname){}
void person::setYear(int year)
{
    this->year=year;
}
int person::getYear()
    {
        return year;
    }
void person::setName(char *name)
{
   delete [] this->name;
   size_t l=strlen(name);
   this-> name = new char [l+1];
   strcpy(this->name, name);
}
void person::setSurname(char *surname)
{
   delete [] this->surname;
   size_t len=strlen(surname);
   this-> surname = new char[len+1];
   strcpy(this->surname, surname);
}
char *person::getSurname(char *s)
{
char *save = s;
char *from = this->surname;
while (*s++ = *from++);
return(save);
}
char *person::getName(char *S)
 {
char *Save = S;
char *From = this->name;
while (*S++ = *From++);
return(Save);
}


    person::~person()
    {
        delete [] name;
        delete [] surname;
    }
     void person::print()
{
    cout << "year = " << year << "\tname = "<< name << "\tsurname = " << surname << "\n";

}


