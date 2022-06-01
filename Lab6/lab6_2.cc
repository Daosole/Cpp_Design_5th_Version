// 3*3 Matrix transpose Use pointer
// data 1 2 3 4 5 6 7 8 9
#include <iostream>
using namespace std;

int main(void)
{
    void trans(int(*pointer)[3]);
    int(*pt)[3];
    pt = new int[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            pt[i][j] = i * 3 + j + 1;
        }
    }
    
    cout << "The original array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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

void trans(int (*pointer)[3])
{
    int temp[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = *(pointer[j] + i);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << temp[i][j];
        }
        cout << endl;
    }
}