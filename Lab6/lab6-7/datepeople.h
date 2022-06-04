// Date 类和 people 类的声明
#ifndef _DATEPEOPLE_H_
#define _DATEPEOPLE_H_

class Date // 日期类
{
  private:
    int year;
    int month;
    int day;

  public:
    Date() : year(0), month(0), day(0)
    {
    }
    Date(int y, int m, int d) : year(y), month(m), day(d)
    {
    }
    void setBrith();

    int getY()
    {
        return year;
    };
    int getM()
    {
        return month;
    };
    int getD()
    {
        return day;
    };
    ~Date();
};

class People // people 类
{
  private:
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

#endif