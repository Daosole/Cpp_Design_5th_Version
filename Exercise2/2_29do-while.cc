#include <cmath>
#include <iostream>
using namespace std;

int main(void)
{
    int i, j, k, flag;
    i = 2;
    do
    {
        flag = 1;
        k = sqrt(i);
        j = 2;
        do
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            j++;
        } while (j <= k);
        if (flag)
        {
            cout << i << "是质数." << endl;
        }
        i++;
    } while (i <= 100);
    return 0;
}