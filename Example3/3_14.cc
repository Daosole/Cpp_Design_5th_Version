// 内联函数
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

inline double calArea(double radius)
{
    return PI * radius * radius;
}

int main(void)
{
    double r = 3.0;
    double area = calArea(r);
    cout << area << endl;

    return 0;
}