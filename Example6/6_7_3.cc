// 使用指针变量
#include <iostream>
using namespace std;

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int *p = a; p < (a + 10); p++)
        cout << *p << " ";

    cout << endl;
    return 0;
}