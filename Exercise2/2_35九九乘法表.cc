#include <iomanip>
#include <iostream>
using namespace std;
int main(void)
{
    int i, j;
    cout << "九九乘法表" << endl;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << "x" << i << "=" << setw(-5) << i * j << "\t";
            if (j == i)
                cout << endl;
        }
    }
    return 0;
}