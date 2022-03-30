// 摄氏度 华氏度的相互转换 celsius  fahrenheit
#include <iostream>
using namespace std;
int main(void)
{
    float Convert(float x);
    float cel, fah;
    cout << "Please input Fahrenheit:" << endl;
    cin >> fah;
    cel = Convert(fah);
    cout << "The Celsius is:" << " " << cel << endl;

    return 0;
}

float Convert(float x)
{
    float z;
    return z = (x - 32) * 5.0 / 9;
}