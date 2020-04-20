#pragma once
#include "person.h"

class client: public person
{
private:
   char *name_project;
public:
    client();
    client(client &cl);
    client(int year, char *name, char *surname, char *name_project);
    void setName_project(char *);
    char *getName_project(char *);
  void print()override;

};
