#include "employee.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

Employee::Employee(char *name, char *addr, char *city, char *zip, char sex)
{
    strcpy(Name, name);
    strcpy(Address, addr);
    strcpy(City, city);
    strcpy(Zip, zip);
    Sex = sex;
}

Employee::~Employee()
{
    cout << "Destructor called" << endl;
}

void Employee::change_name(char *name)
{
    strcpy(Name, name);
}

void Employee::display()
{
    cout << "The information is: " << endl;
    cout << "\tName: " << Name << endl;
    cout << "\tAddress: " << Address << endl;
    cout << "\tCity: " << City << endl;
    cout << "\tZip: " << Zip << endl;
    cout << "\tSex: " << Sex << endl;
}

int main(void)
{
    Employee a("Chlie", "YanTaQu,ChangAn Road 199 ", "Xi'an", "710009", 'F');
    a.display();
    a.change_name("rubys");
    cout << "Name After Changed: " << endl;
    a.display();

    return 0;
}