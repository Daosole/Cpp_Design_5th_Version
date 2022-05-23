// 具有静态数据成员的 Point 类
#include <iostream>
using namespace std;

class Point
{
  public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    {
        count++;
    }

    Point(Point &p)
    {
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point()
    {
        count--;
    }
    int getX()
    {
        return x;
    };
    int getY()
    {
        return y;
    };

    static void showCount()
    {
        cout << "  Object count=" << count << endl;
    }

  private:
    int x, y;
    static int count; // 静态数据成员声明，用于记录点的个数
};

int Point::count = 0; // 静态数据成员定义和初始化，使用类名限定

int main(void)
{
    void (*funcPtr)() = Point::showCount; // 定义一个指向函数的指针，指向类的静态成员函数

    Point a(4, 5);
    cout << "Point A: " << a.getX() << "," << a.getY();
    funcPtr();

    Point b(a);
    cout << "Point B: " << b.getX() << "," << b.getY();
    funcPtr(); // 输出对象个数，直接通过指针访问静态函数成员

    return 0;
}