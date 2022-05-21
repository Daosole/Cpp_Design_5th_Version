// 习题 5-13
#include "xyz.h"
#include <iostream>
using namespace std;

void X::show()
{
    cout << i << endl;
}

int main(void)
{
    X x;
    Y y;
    Z z;
    z.f(&x);
    x.set(3);
    x.show();
    return 0;
}