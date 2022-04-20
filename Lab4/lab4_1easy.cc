#include <iostream>
using namespace std;

enum CPU_Rank
{
    P1 = 1,
    P2,
    P3,
    P4,
    P5,
    P6,
    P7
};
class CPU
{
  public:
    CPU(CPU_Rank r, int fre, float vol);
    void showInfo();
    void run();
    void stop();
    ~CPU()
    {
        cout << "destructor function" << endl;
    }

  private:
    CPU_Rank rank;
    int frequency;
    float voltage;
};

// 构造函数
CPU::CPU(CPU_Rank r, int fre, float vol)
{
    rank = r;
    frequency = fre;
    voltage = vol;
}

// 成员函数实现
void CPU::showInfo()
{
    cout << "The data of CPU" << endl;
    cout << "RANK:" << rank << " FREQUENCY:" << frequency << " VOLTAGE:" << voltage << endl;
}

void CPU::run()
{
    cout << "CPU running" << endl;
}

void CPU::stop()
{
    cout << "CPU stoping" << endl;
}

// 主函数
int main(void)
{
    CPU a(P5, 400, 4.2);
    a.showInfo();
    a.run();
    a.stop();

    return 0;
}