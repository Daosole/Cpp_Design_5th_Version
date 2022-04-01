// 使用引用传递改写例 3-11
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main(void)
{
    int x = 5, y = 10;
    cout << "x = " << x << "     y = " << y << endl;
    swap(x, y);
    cout << "x = " << x << "     y = " << y << endl;
    return 0;
}