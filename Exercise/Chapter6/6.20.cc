#include <iostream>
using namespace std;

class SimpleCircle
{
public:
    SimpleCircle();
    SimpleCircle(int);
    SimpleCircle(const SimpleCircle &);
    ~SimpleCircle() {}

    void setRadius(int);
    int getRadius() const;

private:
    int *itsRadius;
};

SimpleCircle::SimpleCircle()
{
    itsRadius = new int(5);
}

SimpleCircle::SimpleCircle(int radius)
{
    itsRadius = new int(radius);
}

SimpleCircle::SimpleCircle(const SimpleCircle &rhs)
{
    int val = rhs.getRadius();
    itsRadius = new int(val);
}

int SimpleCircle::getRadius() const
{
    return *itsRadius;
}

int main()
{
    SimpleCircle C1, C2(9);
    cout << "Circle one:" << C1.getRadius() << endl;
    cout << "CIrcle two:" << C2.getRadius() << endl;
    return 0;
}