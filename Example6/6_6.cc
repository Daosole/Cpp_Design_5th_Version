#include <iostream>
using namespace std;

int main(void)
{
    void *pv;
    int i = 5;
    pv = &i;
    int *pint = static_cast<int *>(pv);
    cout << "*pint=" << *pint << endl;
    return 0;
}