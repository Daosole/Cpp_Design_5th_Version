// 常引用做形参
/* 本例在例 5-6 的基础上修改，使其中的 dist 函数的形参以常引用的方式传递 */
#include <cmath>
#include <iostream>
using namespace std;

class Point
{
  public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    {
    }
    int getX()
    {
        return x;
    };
    int getY()
    {
        return y;
    };

    friend float dist(const Point &p1, const Point &p2); // 友元函数声明

  private:
    int x, y;
};

float dist(const Point &p1, const Point &p2)
{
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return static_cast<float>(sqrt(x * x + y * y));
}

int main(void)
{
    Point myp1(1, 1), myp2(4, 5);
    cout << "The distance is: ";
    cout << dist(myp1, myp2) << endl;
    return 0;
}