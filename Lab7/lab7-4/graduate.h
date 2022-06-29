#ifndef _GRADUATE_H_
#define _GRADUATE_H_
#include "student.h"
#include "teacher.h"

class Graduate :  public Student
{
protected:
    char subject[21]; // 专业
    Teacher adviser;

public:
    Graduate();
    Graduate(char *na, char *nu, char *s, Date B, char *id, char *sub, Teacher ad);
    Graduate(Graduate &);
    ~Graduate();

    void show();
    void set();
};

#endif