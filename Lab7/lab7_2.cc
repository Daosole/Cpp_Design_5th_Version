#include <iostream>
using namespace std;

class BaseClass // 基类
{
private:
    int Number;

public:
    BaseClass(int n) : Number(n) // 基类的构造函数
    {
        cout << "Base Constructor called" << endl;
    }
    ~BaseClass() // 基类的析构函数
    {
        cout << "Base Destructor called" << endl;
    }
    void setNum(int n)
    {
        Number = n;
    }
    void show()
    {
        cout << "Number: " << Number << endl;
    }
};

// 派生类
class DerivedClass : public BaseClass
{
public:
    DerivedClass(int d) : BaseClass(d)
    {
        cout << "Derived Constructor called" << endl;
    }

    ~DerivedClass()
    {
        cout << "Derived Destructor called" << endl;
    }
};

int main(void)
{
    DerivedClass dc(3);
    dc.show();
    dc.setNum(5);
    dc.show();

    return 0;
}
