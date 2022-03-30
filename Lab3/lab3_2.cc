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
    cout << "你想求几个数的最大值(输入 2 或 3): ";
    cin >> choice;
    switch (choice)
    {
    case 2:
        int type;
        cout << "整数的最大值还是浮点数的最大值(输入 1 求整数 输入 2 求浮点数): ";
        cin >> type;
        if (type == 1)
        {
            int a, b;
            cout << "输入两个整数: " << endl;
            cin >> a >> b;
            cout << "最大值 max = " << Max1(a, b) << endl;
        }
        if (type == 2)
        {
            double a, b;
            cout << "输入两个浮点数: " << endl;
            cin >> a >> b;
            cout << "最大值 max = " << Max1(a, b) << endl;
        }
        break;
    case 3:
        int typ;
        cout << "整数的最大值还是浮点数的最大值(输入 1 求整数 输入 2 求浮点数): ";
        cin >> typ;
        if (typ == 1)
        {
            int a, b, c;
            cout << "输入三个整数: " << endl;
            cin >> a >> b >> c;
            cout << "最大值 max = " << Max1(a, b, c) << endl;
        }
        if (typ == 2)
        {
            double a, b, c;
            cout << "输入三个浮点数: " << endl;
            cin >> a >> b >> c;
            cout << "最大值 max = " << Max1(a, b, c) << endl;
        }
        break;
    
    default:
        cout << "输入错误!" << endl;
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