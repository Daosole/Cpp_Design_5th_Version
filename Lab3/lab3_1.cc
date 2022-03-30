// 摄氏度 华氏度的相互转换 celsius  fahrenheit
#include <iostream>
using namespace std;
int main(void)
{
    float cel, fah;
    cout << "Please input Fahrenheit:" << endl;
    cin >> fah;
    cel = (fah - 32) * 5.0 / 9;
    cout << "The Celsius is:" << " " << cel << endl;

    return 0;
}