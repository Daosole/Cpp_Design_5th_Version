#include <iostream>
using namespace std;

class Dog 
{
  private:
    int age;
    float weight;
    
  public:
    Dog() {}
    Dog(int a, float w) : age(a), weight(w) {}
    ~Dog() {}
    void set(int a, float w);
    void show();

};

void Dog::set(int a, float w)
{
    age = a;
    weight = w;
}


void Dog::show()
{
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
}

int main()
{
    Dog d1, d2(3, 34.5);
    d1.set(3, 12);
    cout << "The Dog one's data: ";
    d1.show();
    cout << "The Dog two's data: ";
    d2.show();

    return 0;

}