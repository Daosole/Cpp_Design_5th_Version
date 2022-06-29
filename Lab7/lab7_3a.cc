#include <iostream>
using namespace std;

class vehicle // 基类
{
private:
    int MaxSpeed;
    double Weight;

public:
    vehicle() {}
    vehicle(int ms, double w) : MaxSpeed(ms), Weight(w)
    {
        cout << "vehicle Constructor called" << endl;
    }
    virtual ~vehicle() {}
    void set(int ms, double w)
    {
        MaxSpeed = ms;
        Weight = w;
    }

    void show()
    {
        cout << "\nThe data of vehicle:" << endl;
        cout << "MaxSpeed: " << MaxSpeed << "km/h" << endl;
        cout << "Weight: " << Weight << " Ton" << endl;
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
    bicycle() {}
    bicycle(int ms, double w, double h) : vehicle(ms, w), Height(h)
    {
        cout << "bicycle constructor" << endl;
    }
    ~bicycle() {}
    void show();
    double getHeight() const { return Height; }
};

void bicycle::show()
{
    vehicle::show();
    cout << "Height: " << Height << "m" << endl;
}

class motorcar : virtual public vehicle
{
private:
    int SeatNum;

public:
    motorcar() {}
    motorcar(int ms, double w, int s) : vehicle(ms, w), SeatNum(s)
    {
        cout << "motorcar constructer" << endl;
    }
    ~motorcar() {}
    void show()
    {
        vehicle::show();
        cout << "SeatNum: " << SeatNum << "seats" << endl;
    }
    int getSeat() const { return SeatNum; }
};

class motorcycle : public bicycle, public motorcar
{
public:
    motorcycle(int ms, double w, double h, int s) : vehicle(ms, w), bicycle(ms, w, h), motorcar(ms, w, s)
    {
        cout << "motorcycle constructor" << endl;
    }
    ~motorcycle()
    {
    }
    void show();
    double getHeight() const { bicycle::getHeight(); }
    int getSeat() const { motorcar::getSeat(); }
};

void motorcycle::show()
{
    vehicle::show();
    cout << "Height:" << getHeight() << "m" << endl;
    cout << "SeatNum: " << getSeat() << "seats" << endl;
}

int main()
{
    vehicle v1(80, 5.0);
    v1.show();

    bicycle c1(90, 7.9, 1.9);
    c1.show();
    c1.Run();
    c1.Stop();
    cout << endl;

    motorcar m1(100, 8.0, 5);
    m1.show();
    m1.Run();
    m1.Stop();
    cout << endl;
    motorcycle mc(99, 10.2, 2.3, 7);
    mc.show();
    mc.Run();
    mc.Stop();
    cout << endl;

    return 0;
}