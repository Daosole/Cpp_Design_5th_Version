#include <iostream>
#include <cmath>
using namespace std;

int fn1(int i);

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;

    cout << "the accumulation from 1 to " << i << " is:" << fn1(i) << endl;
    return 0;
}

int fn1(int i)
{
    if (i == 1)
        return 1;
    else
        return i + fn1(i - 1);
}