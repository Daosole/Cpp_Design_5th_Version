#include <iostream>
using namespace std;

int i;

int main(void)
{
    i = 5;
    {
        int i;
        i = 7;
        cout << "i=" << i << endl;
    }
    cout << "i=" << i << endl;
    return 0;
}