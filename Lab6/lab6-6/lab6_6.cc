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
    cout << "\tName: " << Name << endl;
    cout << "\tAddress: " << Address << endl;
    cout << "\tCity: " << City << endl;
    cout << "\tZip: " << Zip << endl;
    cout << "\tSex: " << Sex << endl;
}

int main(void)
{
    Employee em[] = {
        Employee("Chlie", "YanTaQu,ChangAn Road 199 ", "Xi'an", "710009", 'F'),
        Employee("Bitch", "YanTaQu,ShaBi Road 13 ", "ChangSha", "210098", 'F'),
        Employee("Joy", "ChangAnQu, JinYe Road 19 ", "ShangHai", "420098", 'M'),
        Employee("Ley", "Good Town, Beijing Road 90 ", "TianJin", "512220", 'F'),
        Employee("Tom", "Jerry Town, North Road 111 ", "New York", "400056", 'M'),

    };

    const int n = sizeof(em) / sizeof(Employee);

    for (int i = 0; i < n; i++)
    {
        cout << "The employee " << i + 1 << "'s information" << endl;
        em[i].display();
        cout << endl;
    }

    cout << "The origin information of NO.4 is: " << endl;
    em[3].display();
    cout << "After changed" << endl;
    em[3].change_name("Ford");
    em[3].display();

    return 0;
}