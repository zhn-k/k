
#include"coder.h"
coder::coder( int year,  char *name,  char *surname, char *name_project):employee(year, name, surname)
{
    this->name_project = 0;
    setName_project(name_project);
}
coder::coder():coder(0,"none","none","none"){}
coder::coder( coder&c):coder(c.year, c.name, c.surname, c.name_project){}
void coder::setName_project(char *name_project)
{
    delete [] this->name_project;
    size_t len=strlen(name_project);
    this-> name_project = new char[len+1];
    strcpy(this->name_project, name_project);
}
char *coder::getName_project(char *s)
{
    char *save = s;
    char *from = this->name_project;
    while (*s++ = *from++);
    return(save);
}
     void coder::print()
{
    cout << "year = " << year << "\tname = "<< name << "\tsurname = " << surname << "\tname_project="<<name_project<<endl;}
