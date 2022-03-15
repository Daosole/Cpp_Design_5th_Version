// 求出一个整数的因子
#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Number " << n << " Factors ";

    for (int k = 1; k <= n; k++)
    {
        if (n % k == 0)
            cout << k << " ";
    }
    cout << endl;
    return 0;
}