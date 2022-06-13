# 5-1
作用域讨论的是标识符的有效范围，作用域是一个标识符在程序正文中有效的区域。C++ 的作用域分为 **函数原型作用域**、**块作用域(局部作用域)**、**类作用域**和**文件作用域**。

# 5-2
可见性是标识符是否可以引用的问题
可见性的一般规则是：标识符要声明在前，引用在后；在同一作用域中，不能声明同名的标识符。对于在不同的作用域声明的标识符，遵循的原则是：若有两个或多个具有包含关系的作用域，外层声明的标识符如果在内层没有声明同名标识符时扔可见，如果内层声明了同名标识符则外层标识符不可见。

# 5-3
```c++
#include <iostream>
using namespace std;

int x = 5, y = 7;

void myFunction()
{
    int y = 10;
    cout << "x from myFunction: " << x << endl;
    cout << "y from myFunction: " << y << endl;
}

int main()
{
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
    cout << endl;
    myFunction();
    cout << "Back from myFunction!" << endl;
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
    return 0;
}
```

# 5-4
```c++
class fuel;
class engine
{
    friend class fuel;
private:    
    int powerLevel;
public:
    engine() { powerLevel = 0;}
    void engine_fn(fuel &f);
};

class fuel
{
    friend class engine;
private:
    int fuelLevel;
public:
    fuel() {fuelLevel = 0}
    void fuel_fn(engine &e);
}
```

# 5-5
类的静态数据成员是类的数据成员的一种特例，采用 _static_ 关键字来声明。对于类的普通数据成员，每一个类的对象都拥有一份存储，就是说每个对象的同名数据成员可以分别存储不同的数值，这也是保证对象拥有自身区别于其他对象的特征的需要，但是静态数据成员，每个类只要一份存储，由所有该类的对象共同维护和使用，这个共同维护、使用也就实现了同一类的不同对象之间的数据共享。

# 5-6
使用 _static_ 关键字声明的函数成员是静态的，静态函数成员属于整个类，同一个类的所有对象共同维护，为这些对象所共享。静态函数成员具有以下两个方面的好处，一是由于静态成员函数只能直接访问同一个类的静态数据成员，可以保证不会对该类的其余数据成员造成负面影响；二是同一个类只维护一个静态函数成员的拷贝，节约了系统的开销，提高了程序的运行效率。

# 5-7
answer version
```c++
#include <iostream>
using namespace std;

class Cat
{
public:
    Cat(int age) : itsAge(age) { numOfCats++; }
    virtual ~Cat() { numOfCats--; }
    virtual int getAge() { return itsAge; }
    virtual void setAge(int age)
    {
        itsAge = age;
    }
    static int getNumOfCats()
    {
        return numOfCats;
    }

private:
    int itsAge;
    static int numOfCats;
};

int Cat::numOfCats = 0;

void telepathicFunction();

int main()
{
    const int maxCats = 5;
    Cat *catHouse[maxCats];
    int i;
    for (i = 0; i < maxCats; i++)
    {
        catHouse[i] = new Cat(i);
        telepathicFunction();
    }
    for (i = 0; i < maxCats; i++)
    {
        delete catHouse[i];
        telepathicFunction();
    }

    return 0;
}

void telepathicFunction()
{
    cout << "There are " << Cat::getNumOfCats() << " cats alive!" << endl;
}
```

my version
```c++
// 习题 5-7
#include <iostream>
using namespace std;

class Cat
{
private:
    static int numOfCats;
    int inital; // 开始有多少只
    int newCat; // 添加的新猫

public:
    Cat(int Init);
    Cat(Cat &c);
    ~Cat()
    {
        cout << "Destructor called" << endl;
    }
    void showInital(); // 输出开始时有多少只猫
    void add(int newC); // 添加猫的数量
    static int getNumOfCats()
    {
        return numOfCats;
    }
};

int Cat::numOfCats = 0; // 静态数据成员类外定义和初始化

Cat::Cat(int Init) : inital(Init) {
    numOfCats = inital;
} //  Constructor

Cat::Cat(Cat &c)
{
    inital = c.inital;
    
}

void Cat::showInital()
{
    cout << "The origin amount of cats:" << endl;
    cout << inital << endl;
}

void Cat::add(int newC)
{
    numOfCats += newC;
}

int main(void)
{
    Cat a(6);
    a.showInital();
    a.add(4);
    cout << "Now, the numbers of Cats is: " <<  a.getNumOfCats() << endl;
    Cat b(a);
    b.add(10);
    b.showInital();
    cout << "Now, the numbers of Cats is: " <<  b.getNumOfCats() << endl;
    return 0;
}
```

# 5-8
友元函数是使用 _friend_ 关键字声明的函数，它可以访问相应类的保护成员和私有成员。友元类是使用 _friend_ 关键字声明的类，它的所有成员函数都是相应类的友元函数。

# 5-9
类 B 不是类 A 的友元，友元关系不具有交换性
类 C 不是类 A 的友元，友元关系不具有传递性
类 D 不是类 B 的友元，友元关系不能被继承

# 5-10
可以，例如
```c++
private:
    static int a;
```

# 5-11
answer version
`fn1.h` 文件
```c++
extern int n;

void fn1()
{
    n = 30;
}
```

main 文件
```c++
#include <iostream>
using namespace std;

#include "fn1.h"

int n;

int main()
{
    n = 20;
    fn1();
    cout << "n 的值为" << n << endl;
    return 0;
}
```

# 5-12
```c++
#include <iostream>
using namespace std;

void fn1()
{
    static int n;
    n += 1;
    cout << "The value of n:" << n << endl;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        fn1();
    }
    return 0;
}
```