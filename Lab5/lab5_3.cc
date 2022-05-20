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
        cout << "Destructor" << endl;
    }
    void showInital();
    void add(int newC);
    static int getNumOfCats()
    {
        return numOfCats;
    }
};

int Cat::numOfCats = 0;

Cat::Cat(int Init) : inital(Init) {
    numOfCats = inital;
} //  Constructor

Cat::Cat(Cat &c)
{
    inital = c.inital;
    
}

void Cat::showInital()
{
    cout << "The origin sum of cats:" << endl;
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