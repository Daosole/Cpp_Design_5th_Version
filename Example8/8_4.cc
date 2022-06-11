// 虚函数成员
#include <iostream>
using namespace std;

class Base1
{
public:
    virtual void display() const; // 虚函数
};

void Base1::display() const
{
    cout << "Base1::display()" << endl;
}

class Base2 : public Base1
{
public:
    void display() const; // 覆盖基类的虚函数
};

void Base2::display() const
{
    cout << "Base2::display()" << endl;
}

class Derived : public Base2
{
public:
    void display() const;
};

void Derived::display() const
{
    cout << "Derived::display()" << endl;
}

void fun(Base1 *ptr) // 参数为指向基类对象的指针
{
    ptr->display(); // 对象指针 -> 成员名
}

int main()
{
    Base1 base1;
    Base2 base2;
    Derived derived;
    fun(&base1);   // 用 Base1 对象的指针调用 fun 函数
    fun(&base2);   // 用 Base2 对象的指针调用 fun 函数
    fun(&derived); // 用 Derived 对象的指针调用 fun 函数

    return 0;
}