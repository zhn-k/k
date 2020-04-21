#pragma once
#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
using namespace std;
#include<iostream>
#include<cstring>
class person {

protected:
    int year;
    char *name;
    char *surname;
  public:
    person(int year, char *name, char *surname);

    person();
    person(person &p);


    void setYear(int);
    void setName(char *);
    void setSurname(char *);
    int getYear() const;
    char *getName(char *)const;
    char *getSurname(char *)const;
    ~person();
    virtual void print()=0 const;



};
#endif // PERSON_H_INCLUDED
