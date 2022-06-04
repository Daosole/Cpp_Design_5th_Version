#include "employee.h"
#include <iostream>
#include <cstring>
using namespace std;

Employee::Employee(const char *name, const char *addr, const char *city, const char *zip, const char sex)
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

void Employee::change_name(const char *name)
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
    cout << endl;

    return 0;
}