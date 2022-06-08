#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
};

class dog : public Animal
{
public:
    void setAge(int n);
    void show()
    {
        cout << "Age:" << age << endl;
    }
};

void dog::setAge(int n)
{
    age = n;
}

int main(void)
{
    dog d;
    d.setAge(3);
    d.show();

    return 0;
}