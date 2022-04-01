// 重载函数
#include <iostream>
using namespace std;
int main(void)
{
    int Max1(int x, int y);
    int Max1(int x, int y, int z);
    double Max1(double x, double y);
    double Max1(double x, double y, double z);
    int choice;
    cout << "How many numbers do you want to compare?(enter 2 or 3): ";
    cin >> choice;
    switch (choice)
    {
    case 2:
        int type;
        cout << "the max of integer or max of real numbers(1 for integer, 2 for real numbers): ";
        cin >> type;
        if (type == 1)
        {
            int a, b;
            cout << "Please enter two integers: " << endl;
            cin >> a >> b;
            cout << "max = " << Max1(a, b) << endl;
        }
        if (type == 2)
        {
            double a, b;
            cout << "Please enter two real numbers: " << endl;
            cin >> a >> b;
            cout << "max = " << Max1(a, b) << endl;
        }
        break;
    case 3:
        int typ;
        cout << "the max of integer or max of real numbers(1 for integer, 2 for real numbers): ";
        cin >> typ;
        if (typ == 1)
        {
            int a, b, c;
            cout << "Please enter three integers: " << endl;
            cin >> a >> b >> c;
            cout << "max = " << Max1(a, b, c) << endl;
        }
        if (typ == 2)
        {
            double a, b, c;
            cout << "Please enter three real numbers: " << endl;
            cin >> a >> b >> c;
            cout << "max = " << Max1(a, b, c) << endl;
        }
        break;
    
    default:
        cout << "Input error!" << endl;
        break;
    }

    return 0;
}
// funciton part
int Max1(int x, int y)
{
    int max;
    max = x > y ? x : y;
    return max;
}

int Max1(int x, int y, int z)
{
    int max;
    max = x > y ? x : y;
    max = max > z ? max : z;
    return max;
}

double Max1(double x, double y)
{
    double max;
    max = x > y ? x : y;
    return max;
}

double Max1(double x, double y, double z)
{
    double max;
    max = x > y ? x : y;
    max = max > z ? max : z;
    return max;
}