// 时钟类的完整程序
#include <iostream>
using namespace std;

class Clock
{
public:
    Clock(int newH, int newM, int newS); // 构造函数
    Clock();                             // 默认构造函数
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();

private:
    int hour, minute, second;
};

Clock::Clock() : hour(0), minute(0), second(0) {} // 默认构造函数
Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {}

void Clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main(void)
{
    Clock c1(0, 0, 0); // 调用有参数的构造函数
    Clock c2;          // 调用无参数的构造函数
    c1.showTime();
    c2.setTime(8, 30, 30);
    c2.showTime();

    return 0;
}