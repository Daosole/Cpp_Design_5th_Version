#include <iostream>
using namespace std;

class Vehicle
{
public:
    // virtual void run()
    void run()
    {
        cout << "Running" << endl;
    }
    // virtual void stop()
    void stop()
    {
        cout << "Stopping" << endl;
    }
};

class Bicycle : virtual public Vehicle // 多继承的间接子类访问第一级基类，设置为虚继承
{
public:
    void run()
    {
        cout << "Bicycle running" << endl;
    }
    void stop()
    {
        cout << "Bicycle stopping" << endl;
    }
};

class Motorcar : virtual public Vehicle
{
public:
    void run()
    {
        cout << "Motorcar running" << endl;
    }
    void stop()
    {
        cout << "Motorcar stopping" << endl;
    }
};

class Motorcycle : public Bicycle, public Motorcar
{
public:
    void run()
    {
        cout << "Motorcycle running" << endl;
    }
    void stop()
    {
        cout << "Motorcycle stopping" << endl;
    }
};

void fun(Vehicle *p) // 指向基类的指针
{
    p->run();
}

int main(void)
{
    // 使用对象访问
    Vehicle v;
    Bicycle b;
    Motorcar m;
    Motorcycle mc;
    v.run();
    b.run();
    m.run();
    mc.run();

    // 使用指针
    fun(&v);
    fun(&b);
    fun(&m);
    fun(&mc);

    return 0;
}