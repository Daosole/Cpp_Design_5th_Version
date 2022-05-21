#ifndef _XYZ_H_
#define _XYZ_H_

class X; // 声明类 X 为全局变量
class Y
{
public:
    void g(X *);
};

class X
{
private:
    int i;

public:
    X() : i(0) {}
    void set(int in);
    void show();
    friend class Z;
    friend void Y::g(X *); // Y 的成员函数是 X 的友元函数
    friend void h(X *); // h 函数是 X 的友元函数
};


void X::set(int in)
{
    i = in;
}

void h(X *x)
{
    x->i += 10;
}

void Y::g(X *x)
{
    x->i++;
}


class Z
{
public:
    void f(X *);
};

void Z::f(X *x)
{
    x->i += 5;
}

#endif