#include "graduate.h"
#include <iostream>
#include <cstring>
using namespace std;

Graduate::Graduate()
{
    strcpy(name, "0");
    strcpy(number, "0");
    strcpy(sex, "0");
    strcpy(id, "0");
}

Graduate::Graduate(char *na, char *nu, char *s, Date B, char *id, char *sub, Teacher ad)
    : People(na, nu, s, B, id)
{
    strcpy(subject, sub);
    adviser = ad;
}

Graduate::Graduate(Graduate &p)
{
    strcpy(name, p.name);
    strcpy(number, p.number);
    strcpy(sex, p.sex);
    Birthday = p.Birthday;
    strcpy(id, p.id);
    strcpy(subject, p.subject);
    adviser = p.adviser;
}

Graduate::~Graduate()
{
    cout << "Graduate Class Destructor called" << endl;
}

void Graduate::set()
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
    cout << "Enter subject(20 limit): ";
    cin >> subject;
    cout << "Enter adviser: ";
    adviser.set();
}

void Graduate::show()
{
    cout << "\tName: " << name << endl;
    cout << "\tNumber: " << number << endl;
    cout << "\tSex: " << sex << endl;
    cout << "\tBirthday:" << Birthday.getY() << Birthday.getM() << Birthday.getD() << endl;
    cout << "\tId:" << id << endl;
    cout << "\tSubject: " << subject << endl;
    cout << "\tAdviser: ";
    adviser.show(); 
}