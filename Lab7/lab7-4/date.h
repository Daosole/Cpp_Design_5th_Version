#ifndef _DATE_H_
#define _DATE_H_
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

#endif
