#include <iostream>
using namespace std;

class vehicle // 基类
{
protected:
    int MaxSpeed;
    double Weight;
    char Grade; // 等级 A B C D

public:
    vehicle(int ms, double w, char g) : MaxSpeed(ms), Weight(w), Grade(g)
    {
        cout << "vehicle Constructor called" << endl;
    }
    void set(int ms, double w, char g)
    {
        MaxSpeed = ms;
        Weight = w;
        Grade = g;
    }

    void show()
    {
        cout << "MaxSpeed: " << MaxSpeed << endl;
        cout << "Weight: " << Weight << endl;
        cout << "Grade: " << Grade << endl;
    }
    void Run()
    {
        cout << "Running!" << endl;
    }
    void Stop()
    {
        cout << "Stoping!" << endl;
    }
};

class bicycle : virtual public vehicle
{
private:
    double Height;

public:
    bicycle(int ms, double w, char g, double h) : vehicle(ms, w, g), Height(h)
    {
        cout << "bicycle constructor" << endl;
    }
    void show();
    void set(int ms, double w, char g, double h);
};

void bicycle::set(int ms, double w, char g, double h)
{
    MaxSpeed = ms;
    Weight = w;
    Grade = g;
    Height = h;
}

void bicycle::show()
{
    cout << "MaxSpeed: " << vehicle::MaxSpeed << endl;
}