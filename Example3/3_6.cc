//投骰子的随机游戏
#include <iostream>
#include <cstdlib>
using namespace std;

// 投骰子 计算和数 输出和数
int rollDice()
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "player rolled " << die1 << "+" << die2 << "=" << sum << endl;
    return sum;
}

enum GameStatus
{
    WIN,
    LOSE,
    PlAYING
};

int main(void)
{
    int sum, myPoint;
    GameStatus status;

    unsigned seed;
    cout << "Please enter an unsigned integer: ";
    cin >> seed; // 输入随机数种子
    srand(seed); // 将种子传递给 rand()

    sum = rollDice(); // 第一轮投骰子 计算和数
    switch (sum)
    {
    case 7:
    case 11: // 和数为 7 或 11， 胜 WIN
        status = WIN;
        break;
    case 2:
    case 3:
    case 12: // 和数为 2 3 12 则为负
        status = LOSE;
        break;
    default: // 其他情况 游戏无结果 状态为 PLAYING 记下点数，为下轮做准备
        status = PlAYING;
        myPoint = sum;
        cout << "Point is " << myPoint << endl;
        break;
    }

    while (status == PlAYING)
    {
        sum = rollDice();
        if (sum == myPoint)
            status = WIN;
        else if (sum == 7)
            status = LOSE;
    }

    // 当状态不为 PLAYING 时，上面的循环结束，以下程序输出结果
    if (status == WIN)
        cout << "player wins" << endl;
    else
        cout << "player loses" << endl;

    return 0;
}