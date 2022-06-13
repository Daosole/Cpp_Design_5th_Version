#include <iostream>
using namespace std;

void fn1()
{
    static int n;
    n += 1;
    cout << "The value of n:" << n << endl;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        fn1();
    }
    return 0;
}