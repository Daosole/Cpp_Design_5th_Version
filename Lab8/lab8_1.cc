#include <iostream>
using namespace std;

class Point
{
private:
    int _x, _y;

public:
    Point() {}
    Point(int a, int b) : _x(a), _y(b) {}
    ~Point()
    {
        cout << "Destructor call" << endl;
    }
    void show() const;
    Point &operator++();   // 前置单目运算符重载
    Point operator++(int); // 后置单目运算符重载
    Point &operator--();
    Point operator--(int);
};

void Point::show() const
{
    cout << "\tx=" << _x;
    cout << "\ty=" << _y << endl;
}

Point &Point::operator++()
{
    ++_x;
    ++_y;
    return *this;
}
Point Point::operator++(int)
{
    Point old = *this;
    ++(*this);
    return old;
}

Point &Point::operator--()
{
    --_x;
    --_y;
    return *this;
}
Point Point::operator--(int)
{
    Point old = *this;
    --(*this);
    return old;
}

int main()
{
    Point m(1, 2), n(3, 5);
    cout << "Origin location:" << endl;
    cout << "m point: ";
    m.show();
    cout << "n point: ";
    n.show();
    cout << "Point m++" << endl;
    (m++).show();
    cout << "++m Point" << endl;
    (++m).show();

    cout << "Point n--" << endl;
    (n--).show();
    cout << "--n Point" << endl;
    (--n).show();

    return 0;
}