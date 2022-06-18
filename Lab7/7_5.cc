#include <iostream>
using namespace std;

const double PI = 3.14159;

class Shape {
protected:
    double length, width;
    double radius;
    double area;
    double perimeter; // 周长

public:
    Shape() { }
    ~Shape() { }
    double getLen() { return length; }
    double getWid() { return width; }
    double getRad() { return radius; }
};

class Rectangle : virtual public Shape {
public:
    Rectangle() { }
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    ~Rectangle()
    {
        cout << "Rectangle class destrutor" << endl;
    }
    void set(double l, double w);
    double getArea()
    {
        return length * width;
    }
    double getPeri()
    {
        return 2 * (length + width);
    }
    void show()
    {
        cout << "The Rectangle:" << endl;
        cout << "Length: " << getLen() << endl;
        cout << "Width: " << getWid() << endl;
    }
};

class Circle : virtual public Shape {
public:
    Circle(double rad)
    {
        radius = rad;
    }
    ~Circle()
    {
        cout << "Circle class destructor" << endl;
    }
    void setRad(double rad)
    {
        radius = rad;
    }
    double getArea()
    {
        return PI * radius * radius;
    }
    double getPeri()
    {
        return 2 * PI * radius;
    }
    void show()
    {
        cout << "Radius of Circle: " << getRad() << endl;
        cout << "Area of Circle: " << getArea() << endl;
        cout << "Perimeter of Circle: " << getPeri() << endl;
    }
};

class Square : public Rectangle {
private:
    double length;

public:
    Square(double len) : Rectangle(len,len)
    {
    
    }
    ~Square() { }
    // double getLen()
    // {
    //     return length;
    // }
    // double getArea()
    // {
    //     return length * length;
    // }
    void show()
    {
        cout << "The length of Square: " << getLen() << endl;
        cout << "The area of Square: " << getArea() << endl;
    }
};

int main()
{
    Rectangle rect(3, 4);
    rect.show();
    cout << "The area of Rectangle: " << rect.getArea() << endl;
    Circle c(4);
    c.show();

    Square s1(3);
    s1.show();

    return 0;
}