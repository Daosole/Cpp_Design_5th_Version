#include <iostream>
#include <cmath>
using namespace std;

int fn1(int i, int j);

int main()
{
    int i, j, x, y;
    cout << "Please enter a postive number: ";
    cin >> i;
    cout << "Enter another postive number: ";
    cin >> j;
    x = fn1(i, j);
    y = i * j / x;
    cout << "Highest common factor is: " << x << endl;
    cout << "Least common multiple is: " << y << endl;

    return 0;
}

int fn1(int i, int j)
{
    int temp;
    if (i < j)
    {
        temp = i;
        i = j;
        j = temp;
    }
    while (j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    return i;
}
