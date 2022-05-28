#include "Rectangle.h"
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    Rectanle rect;
    rect.initRectangle(2, 3, 20, 10); // 设置矩形的数据
    rect.move(3, 2);                  // 移动矩形的为止
    cout << "The data of rect(x, y, w, h): " << endl;
    cout << rect.getX() << ", " << rect.getY() << ", " << rect.getW() << ", " << rect.getH() << endl;

    return 0;
}