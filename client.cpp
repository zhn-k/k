#include "client.h"

client::client( int year,  char *name,  char *surname, char *name_project):person(year, name, surname)
{
    this->name_project = 0;
    setName_project(name_project);
}
client::client():client(0,"none","none","none"){}
client::client( client&c):client(c.year, c.name, c.surname, c.name_project){}
void client::setName_project(char *name_project)
{
    delete [] this->name_project;
    size_t len=strlen(name_project);
    this-> name_project = new char[len+1];
    strcpy(this->name_project, name_project);
}
char *client::getName_project(char *s)const
{
    char *save = s;
    char *from = this->name_project;
    while (*s++ = *from++);
    return(save);
}
     void client::print()
{
    cout << "year = " << year << "\tname = "<< name << "\tsurname = " << surname << "\tname_project="<<name_project<<endl;
}
