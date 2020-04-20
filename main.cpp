#include <iostream>
using namespace std;
#include "person.h"
#include "client.h"
#include "employee.h"
#include"coder.h"
#include "manager.h"

int main()
{
int number, i;
int year;
char name[100];
char name_object[100];
char surname[100];
char buff[1000];
char *buff1 = buff;
cout<<"Information about person\n"<<"information about client (input 1)\n"<<"information about manager (input 2)\n"<<"information about coder (input 3)\n"<<endl;
cin>>i;
if (i==1)
{cin>>name>>surname>>year>>name_object;
client cv(year, name, surname,name_object);
cv.print();
client p3(10, "Bob", "Potter","moon");
p3.print();
cout << endl;
client p4(p3);
p4.print();
client cc;
cc.print();
}
if (i==2)
{cin>>name>>surname>>year>>number;
manager cv(year, name, surname,number);
cv.print();
manager p3(10, "Bob", "Potter",0);
p3.print();
cout << endl;
manager p4(p3);
p4.print();
manager cc;
cc.print();
}if (i==3)
{cin>>name>>surname>>year>>name_object;
coder cv(year, name, surname,name_object);
cv.print();
cin>>name>>surname>>year>>name_object;
coder aa(year, name, surname,name_object);
aa.print();
{if ( cv> aa)
{
    cout<< " aa older cv";
}
else
{
    cout<<"cv older";
}
coder p3(10, "Bob", "Potter","moon");
p3.print();
cout << endl;
coder p4(p3);
p4.print();
coder cc;
cc.print();
}
}
}


