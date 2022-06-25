#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "people.h"

class Student : virtual People
{
protected:
    char classNO[7]; // 班号

public:
    Student();
    Student(char *na, char *nu, char *s, Date B, char *id, char *cn);
    Student(Student &);
    ~Student();

    void show();
    void set();
};

#endif