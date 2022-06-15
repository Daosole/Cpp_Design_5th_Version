#include <iostream>
using namespace std;

class vehicle // 基类
{
protected: // 声明为保护成员，可以让子类也访问这些数据成员
    int MaxSpeed;
    double Weight;
    char Grade; // 等级 S A B C D

public:
    vehicle(int ms, double w, char g) : MaxSpeed(ms), Weight(w), Grade(g)
    {
        cout << "vehicle Constructor called" << endl;
    }
    virtual ~vehicle() {}
    void set(int ms, double w, char g)
    {
        MaxSpeed = ms;
        Weight = w;
        Grade = g;
    }

    void show()
    {
        cout << "\nThe data of vehicle:" << endl;
        cout << "MaxSpeed: " << MaxSpeed << "km/h" << endl;
        cout << "Weight: " << Weight << " Ton" << endl;
        cout << "Grade: " << Grade << "\n\n";
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
protected:
    double Height;

public:
    bicycle(int ms, double w, char g, double h) : vehicle(ms, w, g), Height(h)
    {
        cout << "bicycle constructor" << endl;
    }
    ~bicycle() {}
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
    cout << "\nThe data of bicycle:" << endl;
    cout << "MaxSpeed: " << MaxSpeed << "km/h" << endl;
    cout << "Weight: " << Weight << " Ton" << endl;
    ;
    cout << "Grade: " << Grade << endl;
    cout << "Height: " << Height << "m"
         << "\n\n";
}

class motorcar : virtual public vehicle
{
protected:
    int SeatNum;

public:
    motorcar(int ms, double w, char g, int s) : vehicle(ms, w, g), SeatNum(s)
    {
        cout << "motorcar constructer" << endl;
    }
    ~motorcar() {}
    void set(int ms, double w, char g, int s)
    {
        MaxSpeed = ms;
        Weight = w;
        Grade = g;
        SeatNum = s;
    }
    void show()
    {
        cout << "\nThe data of motorcar: " << endl;
        cout << "MaxSpeed: " << MaxSpeed << "km/h" << endl;
        cout << "Weight: " << Weight << " Ton" << endl;
        cout << "Grade: " << Grade << endl;
        cout << "SeatNum: " << SeatNum << "seats"
             << "\n\n";
    }
};

class motorcycle : public bicycle, public motorcar
{
public:
    motorcycle(int ms, double w, char g, double h, int s) : vehicle(ms, w, g), bicycle(ms, w, g, h), motorcar(ms, w, g, s)
    {
        cout << "motorcycle constructor" << endl;
    }
    void show();
    void set(int ms, double w, char g, double h, int s);
};

void motorcycle::show()
{
    cout << "\nThe data of motorcycle: " << endl;
    cout << "MaxSpeed: " << MaxSpeed << "km/h" << endl;
    cout << "Weight: " << Weight << " Ton" << endl;
    cout << "Grade: " << Grade << endl;
    cout << "Height:" << Height << "m" << endl;
    cout << "SeatNum: " << SeatNum << "seats" << "\n\n";
}

void motorcycle::set(int ms, double w, char g, double h, int s)
{
    MaxSpeed = ms;
    Weight = w;
    Grade = g;
    Height = h;
    SeatNum = s;
}

int main()
{
    vehicle v1(80, 5.0, 'A');
    v1.show();

    bicycle c1(90, 7.9, 'B', 1.9);
    c1.show();

    motorcar m1(100, 8.0, 'A', 5);
    m1.show();
    motorcycle mc(99, 10.2, 'S', 2.3, 7);
    mc.show();

    return 0;
}