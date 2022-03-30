// 编写一个求 x 的 n 次方的函数
#include <iostream>
using namespace std;

// funciton part
double power(double x, int n)
{
    double val = 1.0;
    while (n--)
    {
        val *= x;
    }
    return val;
}
int main(void)
{
    cout << "5 to the power 2 is " << power(5, 2) << endl;

    return 0;
}