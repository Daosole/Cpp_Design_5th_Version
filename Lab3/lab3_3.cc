// 系统函数 求 pow(x,y)
#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    long long x, y, re;
    cout << "input x and y to calculate:" << endl;
    cin >> x >> y;
    re = pow(x, y);

    cout << "The result of "<< x << "^" << y << " is:" << re << endl;

    return 0;    
}