#include <iostream>
using namespace std;

const double PI = 3.14159;

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    ~Circle() {}
    double getArea() const
    {
        return PI * radius * radius;
    }
};

int main(void)
{
    double rad;
    cout << "Enter the radius of a circle: ";
    cin >> rad;
    Circle c1(rad);
    cout << "The area of this circle is: " << c1.getArea() << endl;
    return 0;
}