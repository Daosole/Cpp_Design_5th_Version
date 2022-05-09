#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

// 直线线性拟合，points 为各点，nPoint 为点数
float lineFit(const Point points[], int nPoint)
{
    float avgX = 0, avgY = 0;
    float lxx = 0, lyy = 0, lxy = 0;
    for (int i = 0; i < nPoint; i++) // 计算 x，y 的平均值
    {
        avgX += points[i].getX() / nPoint;
        avgY += points[i].getY() / nPoint;
    }
    for (int i = 0; i < nPoint; i++)
    {
        lxx += (points[i].getX() - avgX) * (points[i].getX() - avgX);
        lyy += (points[i].getY() - avgY) * (points[i].getY() - avgY);
        lxy += (points[i].getX() - avgX) * (points[i].getY() - avgY);
    }
    cout << "This line can be fitted by y=ax+b." << endl;
    cout << "a=" << lxy / lxx << " ";                 // 输出回归系数 a
    cout << "b=" << avgY - lxy * avgX / lxx << endl;  // 输出回归系数 b
    return static_cast<float>(lxy / sqrt(lxx * lyy)); // 返回相关系数 r
}

int main(void)
{
    Point p[10] = {Point(6, 10),  Point(14, 20), Point(26, 30), Point(33, 40), Point(46, 50),
                   Point(54, 60), Point(67, 70), Point(75, 80), Point(84, 90), Point(100, 100)};
    float r = lineFit(p, 10);
    cout << "Line coefficient r = " << r << endl;
    return 0;
}