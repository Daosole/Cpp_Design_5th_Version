#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width; // lenght 长 width 宽

public:
    Rectangle(float l, float w) : length(l), width(w) {}
    ~Rectangle() {}
    void setRect(float l, float w)
    {
        length = l;
        width = w;
    }
    float getArea() const
    {
        return length * width;
    }
};

int main(void)
{
    float le, wid;
    cout << "Enter the length of Rectangle: ";
    cin >> le;
    cout << "Enter the width of Rectangle: ";
    cin >> wid;
    Rectangle a(le, wid);
    cout << "The area of Rect a is: " << a.getArea();
    return 0;
}