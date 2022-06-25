#include "people.h"
#include <iostream>
#include <cstring>
using namespace std;

People::People()
{
    strcpy(name, "0");
    strcpy(number, "0");
    strcpy(sex, "0");
    strcpy(id, "0");
}

People::People(char *na, char *nu, char *s, Date B, char *id)
{
    strcpy(name, na);
    strcpy(number, nu);
    strcpy(sex, s);
    Birthday = B;
    strcpy(id, id);
}

People::People(People &p)
{
    strcpy(name, p.name);
    strcpy(number, p.number);
    strcpy(sex, p.sex);
    Birthday = p.Birthday;
    strcpy(id, p.id);
}

People::~People()
{
    cout << "People Class Destructor called" << endl;
}

void People::set()
{
    cout << "Enter Name(10 limit): ";
    cin >> name;
    cout << "Enter Number(6 limit): ";
    cin >> number;
    cout << "Enter Sex(F/M): ";
    cin >> sex;
    cout << "Enter birthday:" << endl;
    Birthday.setBrith();
    cout << "Enter id(15 limit): ";
    cin >> id;
}

void People::show()
{
    cout << "\tName: " << name << endl;
    cout << "\tNumber: " << number << endl;
    cout << "\tSex: " << sex << endl;
    cout << "\tBirthday:" << Birthday.getY() << Birthday.getM() << Birthday.getD() << endl;
    cout << "\tId:" << id << endl;
}