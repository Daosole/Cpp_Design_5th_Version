#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include "date.h"
#include <string>

class SavingsAccount
{
  private:
    std::string id; // 帐号
    double balance; // 余额
    double rate;
    Date lastDate;       // 上次变更余额的时期
    double accumulation; // 余额按日累加之和
    static double total; // 所有账户的总金额
    // 记录一笔账，date 为日期， amount 为余额 desc 为说明
    void record(const Date &date, double amount, const std::string &desc);
    // 报告错误信息
    void error(const std::string &msg) const;
    // 获得到指定日期为止的存款金额按日累积值
    double accumulate(const Date &date) const
    {
        return accumulation + balance * date.distance(lastDate);
    }

  public:
    SavingsAccount(const Date &date, const std::string &id, double rate);
    const std::string &getId() const
    {
        return id;
    }
    double getBalance() const
    {
        return balance;
    }
    double getRate() const
    {
        return rate;
    }
    static double getTotal()
    {
        return total;
    }
    // 存入现金
    void deposit(const Date &date, double amount, const std::string &desc);
    // 取出现金
    void withdraw(const Date &date, double amount, const std::string &desc);
    // 结算利息，每年 1 月 1 日调用一次该函数
    void settle(const Date &date);
    // 显示账户信息
    void show() const;
};

#endif