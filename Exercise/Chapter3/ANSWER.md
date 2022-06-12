# 3-1
一个较为复杂的系统往往需要划分为若干个子系统，高级语言中的子程序就是用来实现这种模板划分的。C 和 C++ 语言中的子程序就体现为函数。调用其他函数的函数被成为主调函数，被其他函数调用的函数称为被调函数。一个函数和可能既调用别的函数又被另外的函数调用，这样它可能在某一个调用与被调用关系中充当主调函数，而在另一个调用与被调用关系中充当被调函数。
### 声明函数原型
**类型标识符 被调函数名 (含类型说明的形参表);**
### 调用形式
**函数名 (实参列表)**

# 3-2
```c++
#include <iostream>
using namespace std;
int main()
{
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intOne:\t" << intOne << endl;
    cout << "rSomeRef:\t" << rSomeRef << endl;
    cout << "&intOne:\t" << &intOne << endl;
    cout << "&rSomeRef:\t" << &rSomeRef << endl;

    int intTwo = 8;
    rSomeRef = intTwo;
    cout << "\nintOne:\t" << intOne << endl;
    cout << "intTwo:\t" << intTwo << endl;
    cout << "rSomeRef:\t" << rSomeRef << endl;
    cout << "&intOne:\t" << &intOne << endl;
    cout << "&intTwo:\t" << &intTwo << endl;
    cout << "&rSomeRef:\t" << &rSomeRef << endl;
    
    return 0;
}
```

# 3-3
值传递是指当发生函数调用时，给形参分配内存空间，并用实参来初始化形参（直接将实参的值传递给形参）。这一过程是参数值的单向传递过程，一旦形参获得了值便与实参脱离关系，此后无论形参发生了怎样的改变，都不会影响到实参。
引用传递将引用作为形参，在执行主调函数中的调用语句时，系统自动用实参来初始化形参。这样形参就成为实参的一个别名，对形参的任何操作也就直接作用于实参。

# 3-4
定义时使用关键字 _inlilne_ 的函数叫做内联函数；编译器在编译时在调用处用函数体进行替换，节省了参数传递、控制转移等开销；内联函数体内不能有循环语句和 _switch_ 语句；内联函数的定义必须出现在内联函数第一次调用之前；对内联函数不能进行异常接口声明。

# 3-5
不必一致，所有的参数是根据位置和类型而不是名字来区分的。

# 3-6
重载的函数的函数名是相同的，但它们的参数的个数和数据类型不同，编译器根据实参和形参的类型及个数的最佳匹配，自动确定调用哪一个函数。

# 3-7
```c++
#include <iostream>
using namespace std;

typedef unsigned short int USHORT;
short int divide(USHORT a, USHORT b)
{
    if (b == 0)
        return -1;
    else
        return a / b;
}

int main()
{
    USHORT one, two;
    short int answer;
    cout << "Enter two numbers.\n Number one: ";
    cin >> one;
    cout << "Number two: ";
    cin >> two;
    answer = divide(one, two);
    if (answer > -1)
        cout << "Answer: " << answer;
    else    
        cout << "Error, can't divide by zero!";
    return 0;
}
```

# 3-8
```c++
#include <iostream>
using namespace std;
int main(void)
{
    float Convert(float x);
    float cel, fah;
    cout << "Please input Fahrenheit:" << endl;
    cin >> fah;
    cel = Convert(fah);
    cout << "The Celsius is:" << " " << cel << endl;

    return 0;
}

float Convert(float x)
{
    float z;
    return z = (x - 32) * 5.0 / 9;
}
```

# 3-9
```c++
#include <iostream>
#include <cmath>
using namespace std;

int prime(int i);

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;
    if (prime(i))
        cout << i << " is a prime." << endl;
    else
        cout << i << " is not a prime."  << endl;
    return 0;
}

int prime(int i)
{
    int j, k, flag;
    flag = 1;
    k = sqrt(i);
    for (j = 2; j <= k; j++)
    {
        if (i % j == 0)
        {
            flag = 0;
            break;
        }

    }
    return flag;
}
```

# 3-10

```c++
#include <iostream>
#include <cmath>
using namespace std;

int fn1(int i, int j);

int main()
{
    int i, j, x, y;
    cout << "Please enter a postive number: ";
    cin >> i;
    cout << "Enter another postive number: ";
    cin >> j;
    x = fn1(i, j);
    y = i * j / x;
    cout << "Highest common factor is: " << x << endl;
    cout << "Least common multiple is: " << y << endl;

    return 0;
}

int fn1(int i, int j)
{
    int temp;
    if (i < j)
    {
        temp = i;
        i = j;
        j = temp;
    }
    while (j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    return i;
}

```

# 3-11
函数允许嵌套调用，如果函数 1 调用了函数 2，函数 2 再调用了函数 3，便形成了函数的嵌套调用。

函数可以直接或间接地调用自身，称为递归调用。

# 3-12

```c++
#include <iostream>
#include <cmath>
using namespace std;

int fn1(int i);

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;

    cout << "the accumulation from 1 to " << i << " is:" << fn1(i) << endl;
    return 0;
}

int fn1(int i)
{
    if (i == 1)
        return 1;
    else
        return i + fn1(i - 1);
}
```

# 3-13

```c++
#include <iostream>
using namespace std;
int fib(int n);

int main(void)
{
    int n, answer;
    cout << "Enter number: ";
    cin >> n;
    cout << endl;
    answer = fib(n);
    cout << answer << " is the " << n << "th Fibonacci number\n";
    return 0;
}

int fib(int n)
{
    cout << "Processing fib (" << n << ")…";
    if (n < 3)
    {
        cout << "Return 1!\n";
        return 1;
    }
    else
    {
        cout << "Call fib (" << n - 2 << ") and fib (" << n - 1 << ").\n";
        return fib(n - 2) + fib(n - 1);
    }
}
```

# 3-14

```c++
#include <iostream>
using namespace std;

float p(int n, int x);

int main()
{
    int n, x;
    cout << "Enter postive integer n: ";
    cin >> n;
    cout << "Enter postive integer x: ";
    cin >> x;

    cout << "n = " << n << endl;
    cout << "x = " << x << endl;
    cout << "P" << n << "(" << x << ")=" << p(n, x) << endl;
    return 0;
}

float p(int n, int x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
}
```

# 3-15
```c++
#include <iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main()
{
    int iN, power;
    double dN;
    int iA;
    double dA;
    cout << "Enter an int base number: ";
    cin >> iN;
    cout << "Enter a double base number: ";
    cin >> dN;
    cout << "To what power? ";
    cin >> power;
    iA = getPower(iN, power);
    dA = getPower(dN, power);
    cout << iN << " to the " << power << "th power is " << iA << endl;
    cout << dN << " to the " << power << "th power is " << dA << endl;
    return 0;
}

int getPower(int x, int y)
{
    if (y == 1)
        return x;
    else if (y == 0)
        return 1;
    else if (y < 0)
        return 0;
    else
        return (x * getPower(x, y - 1));
}

double getPower(double x, int y)
{
    if (y == 1)
        return x;
    else if (y == 0)
        return 1;
    else if (y < 0)
        return 1 / getPower(x, -y);
    else
        return (x * getPower(x, y - 1));
}
```

# 3-16
对同一个函数的多次不同调用中，编译器会为函数的形参和局部变量分配不同的空间，它们互不影响。