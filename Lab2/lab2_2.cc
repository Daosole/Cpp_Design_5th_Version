// 使用 for 语句实现例2.7
#include <iostream>
using namespace std;
int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}