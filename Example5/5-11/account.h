#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
class SavingsAccount // 储蓄账户类
{
  private:
    int id;
    double balance;
    double rate;
    int lasDate;
    double accumulation;
    static double total; // 所有账户的总金额
    // 记录一笔帐，date 为日期，amount 为金额，desc 为说明
    void record(int date, double amount);
    double accumulate(int date) const
    {
        return accumulation + balance * (date - lasDate);
    }

  public:
    SavingsAccount(int date, int id, double rate);
    int getId() const
    {
        return id;
    };
    double getBalance() const
    {
        return balance;
    };
    double getRate() const
    {
        return rate;
    };
    static double getTotal()
    {
        return total;
    };
    void deposit(int date, double amount);
    void withdraw(int date, double amount);
    // 结算利息，每年 1 月 1 日调用一次函数
    void settle(int date);
    // 显示账户信息
    void show() const;
};
#endif //__ACCOUNT_H__