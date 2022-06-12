#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    a = 30;
    b = a++;
    c = ++a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}