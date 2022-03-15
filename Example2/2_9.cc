// 输出图案
#include <iostream>
using namespace std;
int main(void)
{
    const int N = 4;
    for (int i = 1; i <= N; i++) //输入前 4 行图案
    {
        for (int j = 1; j <= 30; j++)
        {
            cout << ' '; // 在图案左侧空 30 列
        }
        for (int j = 1; j <= 8 - 2 * i; j++)
            cout << ' ';
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = 1; j <= 30; j++)
            cout << ' ';
        for (int j = 1; j <= 7 - 2 * i; j++)
            cout << '*';
        cout << endl;
    }
    return 0;
}