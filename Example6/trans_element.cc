#include <iostream>
using namespace std;

int main(void)
{
    int *pt;
    void trans(int *pointer);
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    pt = &a[0][0];
    cout << "The original array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }
    cout << "After changed:" << endl;
    trans(pt);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }

    return 0;
}

void trans(int *pointer)
{
    int temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            temp = *(pointer + i * 3 + j);
            *(pointer + i * 3 + j) = *(pointer + j * 3 + i);
            *(pointer + j * 3 + i) = temp;
        }
    }
}