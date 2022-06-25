#include "date.h"
class People // people 类
{
  protected:
    char name[11];
    char number[7];
    char sex[3];
    Date Birthday;
    char id[16];

  public:
    People();
    People(char *na, char *nu, char *s, Date B, char *id);
    People(People &p);
    ~People();

    void show();
    void set();
};