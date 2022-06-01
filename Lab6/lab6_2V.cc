// 3*3 Matrix transpose Use pointer
// data 1 2 3 4 5 6 7 8 9
#include <iostream>
#define R 3 // row 行
#define C 5 // column 列
using namespace std;

int main(void)
{
    void trans(int(*pointer)[C]);
    int(*pt)[C];
    pt = new int[R][C];
    
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            pt[i][j] = i * 10 + j * 1 + 1;
        }
    }
    
    cout << "The original array:" << endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << "\t" << *(pt[i] + j);
        }
        cout << endl;
    }
    cout << "After changed:" << endl;
    trans(pt);

    delete[] pt;
    return 0;
}

void trans(int (*pointer)[C])
{
    int temp[C][R];
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            temp[i][j] = *(pointer[j] + i);
        }
    }

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            cout << "\t" << temp[i][j];
        }
        cout << endl;
    }
}