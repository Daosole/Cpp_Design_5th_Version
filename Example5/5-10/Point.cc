// 文件 2，类的实现 Point.cc
#include "Point.h"
#include <iostream>
using namespace std;

int Point::count = 0;

Point::Point(const Point &p) : x(p.x), y(p.y) // 复制构造函数体
{
    count++;
}

void Point::showCount()
{
    cout << "    Objetch count=" << count << endl;
}