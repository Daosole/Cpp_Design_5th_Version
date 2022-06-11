#ifndef __ACCUMULATOR_H__
#define __ACCUMULATOR_H__
#include "date.h"

class Accumulator // 将某个数值按日累加
{
  private:
    Date lastDate; // 上次变更数值的时期
    double value;  // 数值的当前值
    double sum;    // 数值按日累加之和

  public:
    // 构造函数 date 为开始累加的日期 value 为初始值
    Accumulator(const Date &date, double value) : lastDate(date), value(value), sum(0)
    {
    }
    // 获得到日期 date 的累加结果
    double getSum(const Date &date) const
    {
        return sum + value * date.distance(lastDate);
    }
    // 在 date 将数值变更为 value
    void change(const Date &date, double value)
    {
        sum = getSum(date);
        lastDate = date;
        this->value = value;
    }
    // 初始化 将日期变为 date，数值变为 value 累加器清零
    void reset(const Date &date, double value)
    {
        lastDate = date;
        this->value = value;
        sum = 0;
    }
};

#endif