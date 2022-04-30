#include <iostream>
using namespace std;

enum CPU_Rank
{
    L1,
    L2,
    L3,
    L4,
    L5
};        // cpu 等级 1 最高
class CPU // CPU 类
{
private:
    CPU_Rank cpu;

public:
    CPU() : cpu(L1) {}
    CPU(CPU_Rank cpu);
    CPU_Rank getCL()
    {
        return cpu;
    };
    ~CPU() {}
};

CPU::CPU(CPU_Rank cpu) : cpu(cpu) {}

class RAM // RAM 类
{
private:
    char ram;

public:
    RAM() : ram('A') {}
    RAM(int ram) : ram(ram) {}

    char getRam()
    {
        return ram;
    };
    ~RAM() {}
};

class CDROM // CDROM 类
{
private:
    int cdrom;

public:
    CDROM() : cdrom(0) {}
    CDROM(char cdrom) : cdrom(cdrom) {}
    int getCdrom()
    {
        return cdrom;
    };
    ~CDROM() {}
};

class Computer
{
private:
    CPU cpu;
    RAM ram;
    CDROM cdrom;

public:
    Computer(CPU c, RAM r, CDROM cd);
    Computer(Computer& p);
    void show();
    void run()
    {
        cout << "Computer run!" << endl;
    }
    void stop()
    {
        cout << "Computer stop." << endl;
    }
    ~Computer()
    {
        cout << "Computer class destructor funciton" << endl;
    }
};

Computer::Computer(CPU c, RAM r, CDROM cd) : cpu(c), ram(r), cdrom(cd)
{
}

Computer::Computer(Computer& p)
{
    cpu = p.cpu;
    ram = p.ram;
    cdrom = p.cdrom;
}

void Computer::show()
{
    cout << "CPU: " << cpu.getCL() << "\tRAM: " << ram.getRam() << "\tCDRAM: " << cdrom.getCdrom() << endl;
}

int main(void)
{
    CPU a(L1);
    RAM b('D');
    CDROM c(1);
    Computer acer(a, b, c);
    acer.run();
    acer.show();
    acer.stop();
    return 0;
}