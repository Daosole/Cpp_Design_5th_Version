#include <iostream>
#define R 4 // row 行
#define C 3 // column 列
using namespace std;

int main(void)
{
    void trans(int(*pointer)[3]);
    int a[R][C] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12}};

    cout << "The original array:" << endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }
    cout << "After changed:" << endl;
    trans(a);

    //    for (int i = 0; i < R; i++)
    //    {
    //        for (int j = 0; j < C; j++)
    //        {
    //            cout << "\t" << a[i][j];
    //        }
    //        cout << endl;
    //    }

    return 0;
}

void trans(int (*pointer)[3])
{
    int temp[C][R];
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            temp[i][j] = *(pointer[j] + i);
        }
    }

    cout << "temp array:" << endl;
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            cout << "\t" << temp[i][j];
        }
        cout << endl;
    }
}
