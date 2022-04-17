#include <iostream>
using namespace std;
const int n = 18;

int main(void)
{
    int m = 0;
    do
    {
        cout << "请猜这个数的值是为多少?(0 ~ 100): ";
        cin >> m;
        if (n > m)
            cout << "你猜的值太小了!" << endl;
        else if (n < m)
            cout << "你猜的值太大了!" << endl;
        else
            cout << "你猜对了!" << endl;
    } while (n != m);
    return 0;
}