#include <cmath>
#include <iostream>
using namespace std;

int main(void)
{
    int i, j, k, flag;
    i = 2;
    while (i <= 100)
    {
        flag = 1;
        k = sqrt(i);
        j = 2;
        while (j <= k)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            j++;
        }
        if (flag)
        {
            cout << i << "是质数." << endl;
        }
        i++;
    }
    return 0;
}