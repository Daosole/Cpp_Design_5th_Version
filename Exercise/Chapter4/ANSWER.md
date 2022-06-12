# 4-1
公有类型成员用 _public_ 关键字声明，公有类型定义了类的外部接口；私有类型的成员用 _private_ 关键字声明，只允许本类的函数成员来访问，而类外部的任何访问都是非法的，这样私有成员就整个隐蔽在类中，在类的外部根本就无法看到，实现了访问权限的有效控制。

# 4-2
_protected_ 用来声明保护类型的成员，保护类型的性质和私有类型的性质相似，其差别在于继承和派生时派生类的成员函数可以访问基类的保护成员。

# 4-3
构造函数的作用就是在对象被创建时利用特定的值构造对象，将对象初始化为一个特定的状态，使此对象具有区别于彼对象的特征，完成的是一个从一般到具体的过程，构造函数在对象创建的时候由系统自动调用。
析构函数与构造函数的作用几乎正好相反，它是用来完成对象被删除前的一些清理工作，也就是专门做扫尾工作的。一般情况下，析构函数是在对象的生存期即将结束的时刻由系统自动调用的，它的调用完成后，对象也就消失了，相应的内存空间也将释放。

# 4-4
可以，二者都是合法的。数据成员和成员函数都可以是公有或私有的。但数据成员最好声明为私有的。

# 4-5
可以，类的每一个对象都有自己的数据成员。

# 4-6
复制构造函数是一种特殊的构造函数，其形参是本类的对象的引用，其作用是使用一个已经存在的对象，去初始化另一个新的同类的对象。在以下三种情况下会被调用；A 当用类的一个对象去初始化该类的另一个对象时，B 如果函数的形参是类对象，调用函数进行形参和实参结合时 C 如果函数的返回值是类对象，函数调用完成返回时。

# 4-7
赋值运算符(=)作用于一个已存在的对象；而复制构造函数会创建一个新的对象。

# 4-8
Answer Version
```c++
#include <iostream>
using namespace std;

class Dog
{
private:
    int age, weight;

public:
    Dog(int initialAge = 0, int initialWeight = 5);
    ~Dog();
    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getWeight()
    {
        return weight;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
};

Dog::Dog(int initialAge, int initialWeight)
{
    age = initialAge;
    weight = initialWeight;
}

Dog::~Dog() {}

int main()
{
    Dog Jack(2, 10);
    cout << "Jack is a Dog who is ";
    cout << Jack.getAge() << " years old and " << Jack.getWeight() << " pounds weight" << endl;
    Jack.setAge(7);
    Jack.setWeight(20);
    cout << "Now Jack is ";
    cout << Jack.getAge() << " years old and " << Jack.getWeight() << " pounds weight" << endl;

    return 0;
}
```

my Version
```c++
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
```

# 4-9
```c++
#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle(int t, int l, int b, int r); // top left bottom right
    ~Rectangle() {}

    int getTop() const
    {
        return top;
    }
    int getLeft() const
    {
        return left;
    }
    int getBottom() const
    {
        return bottom;
    }
    int getRight() const
    {
        return right;
    }

    void setTop(int t)
    {
        top = t;
    }

    void setLeft(int l)
    {
        left = l;
    }

    void setBottom(int b)
    {
        bottom = b;
    }

    void setRight(int r)
    {
        right = r;
    }

    int getArea() const;

private:
    int top, left, bottom, right;
};

Rectangle::Rectangle(int t, int l, int b, int r)
{
    this->top = t;
    this->left = l;
    this->bottom = b;
    this->right = r;
}

int Rectangle::getArea() const
{
    int width = right - left;
    int height = top - bottom;
    return (width * height);
}

int main()
{
    Rectangle rect(100, 20, 50, 80);
    cout << "Area: " << rect.getArea() << endl;
    return 0;
}
```

# 4-10
见 `Lab4` 文件夹中的 `lab4_3.cc` 

# 4-11
```c++
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
```

# 4-12
my version
```c++
#include <iostream>
using namespace std;

class DataType
{
private:
    int iData;
    char cData;
    float fData;

public:
    DataType(int i, char c, float f) : iData(i), cData(c), fData(f)
    {
        cout << "DataType constructor" << endl;
    }

    void setInt(int i)
    {
        iData = i;
    }

    void setChar(char c)
    {
        cData = c;
    }

    void setFloat(float f)
    {
        fData = f;
    }

    void show() const;
};

void DataType::show() const
{
    cout << "Integer data:\t" << iData << "\tCharater data:\t" << cData << "\tFloat data:\t"
         << fData << endl;
}

int main(void)
{
    DataType d(12, 'V', 6.8);
    cout << "The origin data: " << endl;
    d.show();
    d.setChar('d');
    d.setFloat(7.2);
    d.setInt(10);
    cout << "After changed: " << endl;
    d.show();

    return 0;
}
```

# 4-13

```c++
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
```
# 4-14
```c++
#include <iostream>
using namespace std;

class Tree
{
private:
    int ages;

public:
    Tree(int ag) : ages(ag) {}
    ~Tree() {};
    void grow(int years);
    void age() const;
};

void Tree::grow(int years)
{
    ages += years;
}
void Tree::age() const
{
    cout << "The ages of tree is: " << ages << endl; 
}

int main(void)
{
    Tree t(10);
    cout << "The origin:" << endl;
    t.age();
    t.grow(12);
    cout << "Now: " << endl;
    t.age();

    return 0;
}
```

# 4-15

![uml](https://github.com/Daosole/Cpp_Design_5th_Version/blob/master/Exercise/Chapter4/4-15uml.png) 

# 4-16

```c++
class Person
{
public:
    Person(const Person& right);
    ~Person();

private:
    char Name;
    int Age;
};

class ZRF : protected Person{};
class SSH : private Person {};

```
![4-16uml.png](https://github.com/Daosole/Cpp_Design_5th_Version/blob/master/Exercise/Chapter4/4-16uml.png)

# 4-17

# 4-18

# 4-19

# 4-20
my version
```c++
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
```

answer version
```c++
/*
Complex c1(3,5)
Complex c2 = 4.5;
c1.add(c2);
c1.show();
*/
#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(double r, double i) : real(r), image(i) {}
    Complex(double r) : real(r), image(0) {}
    void show();
    void add(Complex c2);

private:
    double real;
    double image;
};

void Complex::add(Complex c2)
{
    real += c2.real;
    image += c2.image;
}

void Complex::show()
{
    cout << real << "+";
    cout << image << "i";
    cout << endl;
}

int main(void)
{
    Complex c1(3, 5);
    Complex c2 = 4.5;
    c1.show();
    c1.add(c2);
    c1.show();
    return 0;
}
```

# 4-21
102

# 4-22
