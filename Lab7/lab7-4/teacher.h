#ifndef _TEACHER_H_
#define _TEACHER_H_
#include "people.h"

class Teacher : virtual public People
{
protected:
    char principalship[11]; // 职务
    char department[21]; // 部门

public:
    Teacher();
    Teacher(char *na, char *nu, char *s, Date B, char *id, char *pp, char *dp);
    Teacher(Teacher &t);
    ~Teacher();

    void show();
    void set();
};

#endif