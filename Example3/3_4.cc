// 寻找并输出 11 ~ 999 数 m 满足 m m^2 m^3 均为回文数
// 回文数的算法是将各个位分离 生成新的数然后看是否和原数相等
#include <iostream>
using namespace std;

bool symn(unsigned n)
{
    unsigned i = n;
    unsigned m = 0;
    while (i > 0)
    {
        m = m * 10 + i % 10;
        i /= 10;
    }

    return m == n;
}

int main(void)
{
    for (unsigned m = 11; m < 1000; m++)
    {
        if (symn(m) && symn(m * m) && symn(m * m * m))
        {
            cout << "m=" << m;
            cout << " m*m=" << m * m;
            cout << " m*m*m=" << m * m * m << endl;
        }
    }
    return 0;
}