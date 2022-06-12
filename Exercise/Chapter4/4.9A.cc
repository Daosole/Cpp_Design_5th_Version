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