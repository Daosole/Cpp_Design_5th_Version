// 利用指针数组输出单位矩阵
#include <iostream>
using namespace std;

int main(void)
{
    int line1[] = {1, 0, 0};
    int line2[] = {0, 1, 0};
    int line3[] = {0, 0, 1};

    int *pLine[3] = {line1, line2, line3};

    cout << "Matrix test: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << pLine[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}