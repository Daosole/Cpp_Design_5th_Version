#ifndef _TA_H_
#define _TA_H_
#include "graduate.h"
#include "teacher.h"

class TA : public Graduate, public Teacher
{
public:
    TA();
    TA(char *na, char *nu, char *s, Date B, char *id, char *pp, char *dp, char *sub, Teacher ad);
    ~TA();

    void show();
    void set();
};

#endif