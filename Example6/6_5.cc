#include <iostream>
using namespace std;

int main(void)
{
    int i;
    int *ptr = &i;
    i = 10;
    cout << "i=" << i << endl;
    cout << "*ptr=" << *ptr << endl;
    return 0;
}