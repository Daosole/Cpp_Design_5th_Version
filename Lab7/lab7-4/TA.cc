#include "ta.h"
#include <iostream>
#include <cstring>
using namespace std;

TA::TA()
{
    strcpy(name, "0");
    strcpy(number, "0");
    strcpy(sex, "0");
    strcpy(id, "0");
}

TA::TA(char *na, char *nu, char *s, Date B, char *id, char *sub, char *pp,
       char *dp, Teacher ad) : Graduate(na, nu, s, B, id, sub, ad), Teacher(na, nu, s, B, id, pp, dp)
{
}

// TA::TA(TA &p)
// {
//     strcpy(name, p.name);
//     strcpy(number, p.number);
//     strcpy(sex, p.sex);
//     Birthday = p.Birthday;
//     strcpy(id, p.id);
//     strcpy(subject, p.subject);
//     adviser = p.adviser;
// }

TA::~TA()
{
    cout << "TA Class Destructor called" << endl;
}

void TA::set()
{
    Graduate::set();
    Teacher::set();

}

void TA::show()
{
    cout << "\tName: " << name << endl;
    cout << "\tNumber: " << number << endl;
    cout << "\tSex: " << sex << endl;
    cout << "\tBirthday:" << Birthday.getY() << Birthday.getM() << Birthday.getD() << endl;
    cout << "\tId:" << id << endl;
    cout << "\tSubject: " << subject << endl;
    cout << "\tAdviser: ";
    adviser.show();
    Teacher::show();
}