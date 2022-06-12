#include <iostream>
using namespace std;

class Complex
{
  private:
    float a, b;

  public:
    Complex(float m, float n) : a(m), b(n)
    {
    }
    Complex(float m) : a(m), b(0)
    {
    }
    Complex(Complex &p);
    void add(Complex i);
    void show();
    ~Complex()
    {
    }
};

Complex::Complex(Complex &p)
{
    a = p.a;
    b = p.b;
}

void Complex::add(Complex i)
{
    a += i.a;
    b += i.b;
}

void Complex::show()
{
    cout << a << "+" << b << "i" << endl;
}

int main(void)
{
    Complex c1(3, 5);
    Complex c2 = 4.5;
    c1.add(c2);
    c1.show();

    return 0;
}