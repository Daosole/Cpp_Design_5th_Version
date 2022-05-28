#include <iostream>
using namespace std;

class Base1 // 基类 Base1 定义
{
  public:
    void display() const
    {
        cout << "Base1::display()" << endl;
    }
};

class Base2 : public Base1 // 公有派生类 Base2 定义
{
  public:
    void display() const
    {
        cout << "Base1::display()" << endl;
    }
};

class Derived : public Base2 // 公有派生类 Derived 定义
{
  public:
    void display() const
    {
        cout << "Derived::display()" << endl;
    }
};

void fun(Base1 *ptr) // 参数为指向基类对象的指针
{
    ptr->display();
}

int main(void)
{
    Base1 base1;
    Base2 base2;
    Derived derived;

    fun(&base1);
    fun(&base2);
    fun(&derived);

    return 0;
}