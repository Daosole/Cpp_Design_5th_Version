#ifndef _TRAPZINT_H_
#define _TRAPZINT_H_

class Function
{
  public:
    virtual double operator()(double x) const = 0; // 纯虚函数重载运算符()
    virtual ~Function()
    {
    }
};

class MyFunction : public Function
{
  public:
    virtual double operator()(double x) const; // 覆盖虚函数
};

class Integration // 抽象类定义
{
  public:
    virtual double operator()(double a, double b, double eps) const = 0;
    virtual ~Integration()
    {
    }
};

class Trapz : public Integration
{
  public:
    Trapz(const Function &f) : f(f){};
    virtual double operator()(double a, double b, double eps) const;

  private:
    const Function &f; // 私有对象 Function 类对象的指针
};

#endif