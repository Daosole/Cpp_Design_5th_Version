// 使用数组名和指针运算
#include <iostream>
using namespace std;

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;
    return 0;
}