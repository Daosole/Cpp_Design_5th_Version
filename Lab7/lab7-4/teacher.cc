#include "teacher.h"
#include <iostream>
#include <cstring>
using namespace std;

Teacher::Teacher()
{
    strcpy(name, "0");
    strcpy(number, "0");
    strcpy(sex, "0");
    strcpy(id, "0");
}

Teacher::Teacher(char *na, char *nu, char *s, Date B, char *id, char *pp, char *dp)
{
    strcpy(name, na);
    strcpy(number, nu);
    strcpy(sex, s);
    Birthday = B;
    strcpy(id, id);
    strcpy(principalship, pp);
    strcpy(department, dp);
}

Teacher::Teacher(Teacher &t)
{
    strcpy(name, t.name);
    strcpy(number, t.number);
    strcpy(sex, t.sex);
    Birthday = t.Birthday;
    strcpy(id, t.id);
    strcpy(principalship, t.principalship);
    strcpy(department, t.department);
}

Teacher::~Teacher()
{
    cout << "Teacher Class Destructor called" << endl;
}

void Teacher::set()
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
    cout << "Enter Principalship(10 limit): ";
    cin >> principalship;
    cout << "Enter Department(20 limit): ";
    cin >> department;
}

void Teacher::show()
{
    cout << "\tName: " << name << endl;
    cout << "\tNumber: " << number << endl;
    cout << "\tSex: " << sex << endl;
    cout << "\tBirthday:" << Birthday.getY() << Birthday.getM() << Birthday.getD() << endl;
    cout << "\tId:" << id << endl;
    cout << "\tPrincipalship: " << principalship << endl;
    cout << "\tDepartment: " << department << endl;
}