#include <iostream>
using namespace std;

const double PI = 3.14159;

class SimpleCircle
{
  private:
    int *itsRadius;
    double area;

  public:
    SimpleCircle();
    SimpleCircle(int);
    SimpleCircle(const SimpleCircle &s);
    ~SimpleCircle()
    {
        cout << "Destructor called" << endl;
    }
    void setRadius(int);
    int getRadius() const;
    void show() const;
    void countArea(int);
};

SimpleCircle::SimpleCircle()
{
    itsRadius = new int(6);
}

SimpleCircle::SimpleCircle(int radius)
{
    itsRadius = new int(radius);
}

SimpleCircle::SimpleCircle(const SimpleCircle &s)
{
    int tem = s.getRadius();
    itsRadius = new int(tem);
}

int SimpleCircle::getRadius() const
{
    return *itsRadius;
}

void SimpleCircle::setRadius(int r)
{
    itsRadius = new int(r);
}

void SimpleCircle::countArea(int r)
{
    itsRadius = new int(r);
    area = r * r * PI;
}

void SimpleCircle::show() const
{
    cout << "Radius: " << *itsRadius << endl;
    cout << "Area: " << area << endl;
}

int main(void)
{
    SimpleCircle C1, C2(7);
    cout << "The C1's radius is: " << C1.getRadius() << endl;
    int r = C1.getRadius();
    C1.countArea(r);
    C1.show();

    cout << "The C2's radius is: " << C2.getRadius() << endl;
    r = C2.getRadius();
    C2.countArea(r);
    C2.show();
    C2.setRadius(10);
    cout << "After changed.Now C2's radius is: " << C2.getRadius() << endl;

    return 0;
}