// 虚析构函数
#include <iostream>
using namespace std;

class Base
{
public:
    // ~Base();
    virtual ~Base();
};

Base::~Base()
{
    cout << "Base Destructor" << endl;
}

class Derived : public Base
{
public:
    Derived();
    ~Derived();

private:
    int *p;
};

Derived::Derived()
{
    p = new int(0);
}

Derived::~Derived()
{
    cout << "Derived destructor" << endl;
    delete p;
}

void fun(Base *b)
{
    delete b;
}

int main()
{
    Base *b = new Derived();
    fun(b);
    return 0;
}