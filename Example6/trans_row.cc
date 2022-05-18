#include <iostream>

using namespace std;

int main(void) {
    void trans(int(*pointer)[3]);
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    cout << "The original array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }
    cout << "After changed:" << endl;
    trans(a);

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

void trans(int(*pointer)[3]) {
    int temp;

    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            temp = *(pointer[i] + j);
            *(pointer[i] + j) = *(pointer[j] + i);
            *(pointer[j] + i) = temp;
//            cout << *(pointer[i] + j);
        }
    }
}