#include <iostream>
using namespace std;

int main(void)
{
    int a[10], b[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = i * 2 - 1;
        b[10 - i - 1] = a[i];
    }
    for (const auto &e : a) // 范围 for 循环，输出 a 中每个元素
        cout << e << " ";
    cout << endl;
    for (int i = 0; i < 10; i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}