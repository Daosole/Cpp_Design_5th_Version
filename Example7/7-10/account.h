#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include "accumulator.h"
#include "date.h"
#include <string>

class Account
{
  private:
    std::string id;      // 账户
    double balance;      // 余额
    static double total; // 所有账户的总金额

  protected:
    // 供派生类调用的构造函数，id 为账户
    Account(const Date &date, const std::string &id);
    // 记录一笔账 date 为日期 amount 为金额 desc 为说明
    void record(const Date &date, double amount, const std::string &desc);
    // 报告错误信息
    void error(const std::string &msg) const;

  public:
    const std::string &getId() const
    {
        return id;
    }
    double getBalance() const
    {
        return balance;
    }

    static double getTotal()
    {
        return total;
    }
    // 显示账户信息
    void show() const;
};

class SavingsAccount : public Account // 储蓄账户类
{
  private:
    Accumulator acc; // 辅助计算利息的累加器
    double rate;     // 存款的年利率

  public:
    SavingsAccount(const Date &date, const std::string &id, double rate);

    double getRate() const
    {
        return rate;
    }
    // 存入现金
    void deposit(const Date &date, double amount, const std::string &desc);
    // 取出现金
    void withdraw(const Date &date, double amount, const std::string &desc);

    void settle(const Date &date); // 结算利息 每年 1 月 1 日调用一次该函数
};

class CreditAccount : public Account // 信用账户类
{
  private:
    Accumulator acc;       // 辅助计算利息的累加器
    double credit;         // 信用额度
    double rate;           // 欠款的日利率
    double fee;            // 信用卡年费
    double getDebt() const // 获得欠款额
    {
        double balance = getBalance();
        return (balance < 0 ? balance : 0);
    }

  public:
    CreditAccount(const Date &date, const std::string &id, double credit, double rate, double fee);

    double getCredit() const
    {
        return credit;
    }

    double getRate() const
    {
        return rate;
    }

    double getFee() const
    {
        return fee;
    }

    double getAvailableCredit() const // 获得可用信用
    {
        if (getBalance() < 0)
            return credit + getBalance();
        else
            return credit;
    }

    void deposit(const Date &date, double amount, const std::string &desc);

    void withdraw(const Date &date, double amount, const std::string &desc);

    void settle(const Date &date);
    void show() const;
};

#endif