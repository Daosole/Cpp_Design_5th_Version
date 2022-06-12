#include <iostream>
#include <cmath>
using namespace std;

int prime(int i);

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;
    if (prime(i))
        cout << i << " is a prime." << endl;
    else
        cout << i << " is not a prime." << endl;
    return 0;
}

int prime(int i)
{
    int j, k, flag;
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
    return flag;
}