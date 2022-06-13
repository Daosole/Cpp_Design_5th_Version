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