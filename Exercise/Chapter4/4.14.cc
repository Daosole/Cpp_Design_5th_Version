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