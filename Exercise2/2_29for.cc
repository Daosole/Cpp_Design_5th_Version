#include <cmath>
#include <iostream>
using namespace std;

int main(void)
{
    int i, j, k, flag;
    for (i = 2; i <= 100; i++)
    {
        flag = 1;
        k = sqrt(i);
        for (j = 2; j <= k; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << i << "是质数." << endl;
        }
    }
    return 0;
}