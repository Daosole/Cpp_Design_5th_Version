// 时钟类的完整程序
#include <iostream>
using namespace std;

class Clock
{
public:
    Clock(int newH, int newM, int newS); // 构造函数
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();

private:
    int hour, minute, second;
};

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
    Clock c(0, 0, 0);
    c.showTime();
    c.setTime(8, 30, 30);
    c.showTime();

    return 0;
}