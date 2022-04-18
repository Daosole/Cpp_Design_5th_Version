// Point 类的完整程序
#include <iostream>
using namespace std;

class Point
{
  public:
    Point(int xx = 0, int yy = 0) // 构造函数
    {
        x = xx;
        y = yy;
    }
    Point(Point &p); // 复制构造函数
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

  private:
    int x, y;
};

Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}

// 形参为 Point 类对象的函数
void fun1(Point p)
{
    cout << p.getX() << endl;
}

Point fun2() // 返回值为 Point 类对象的函数
{
    Point a(1,2);
    return a;
}

int main(void)
{
    Point a(4,5); // 第一个对象 a
    Point b = a; // 情况 1，用 a 初始化 b。第一次调用复制构造函数
    cout << b.getX() << endl;
    fun1(b); // 情况 2，对象 b 作为 fun1 的实参。第二次调用复制构造函数
    b = fun2(); // 情况 3，函数的返回值是类对象，函数返回时，调用复制构造函数
    cout << b.getX() << endl;
    return 0;
}