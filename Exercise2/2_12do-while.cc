#include <iostream>
using namespace std;

int main(void)
{
    int n = 100;
    do
    {
        n += 2;
    } while (n <= 200);

    cout << n;
    return 0;
}