// 常数据成员举例
#include <iostream>
using namespace std;

class A
{
  public:
    A(int i);
    void print();

  private:
    const int a;
    static const int b;
};

const int A::b = 10; // 静态常数据成员在类外说明和初始化

// 常数据成员只能通过初始化列表来获得初值
A::A(int i) : a(i)
{
}

void A::print()
{
    cout << a << ":" << b << endl;
}

int main(void)
{
    A a1(100), a2(0);
    a1.print();
    a2.print();
    return 0;
}