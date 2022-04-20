#include <iostream>
using namespace std;

class Student
{
  public:
    Student(int id, int ag, int cl = 2021); // 构造函数
    Student(); // 默认构造函数
    Student(Student &p);                 // 复制构造函数
    void setInformation(int id, int ag, int cl);
    void showInformation();
    ~Student() {}// 析构函数

  private:
    int idNo;
    int classNo;
    int age;
};

// 构造函数实现
Student::Student() : idNo(0), age(0), classNo(0) {}

Student::Student(int id, int ag, int cl) : idNo(id), age(ag), classNo(cl) {}

Student::Student(Student &p)
{
    idNo = p.idNo;
    age = p.age;
    classNo = p.classNo;
    cout << "Calling the copy constructor" << endl;
}

void Student::setInformation(int id, int ag, int cl)
{
    idNo = id;
    age = ag;
    classNo = cl;
}

void Student::showInformation()
{
    cout << "Show information" << endl;
    cout << "Class:" << classNo << " ID:" << idNo << " Age:" << age;
    cout << endl;
}

// 函数的形参是类的对象 复制构造函数被调用
void showId(Student q)
{
    q.showInformation();
}

// 函数返回值为类对象 复制构造函数被调用
Student zhao()
{
    Student one(42112003, 18);
    return one;
}

// 主函数
int main(void)
{
    Student me(42110101, 20);
    Student meCy = me; // meCy(me) 用一个对象初始化另一个对象时，复制构造函数被调用
    showId(me);
    Student zh;
    zh = zhao();
    cout << "First" << endl;
    me.showInformation();
    meCy.showInformation();
    zh.showInformation();
    cout << "Second" << endl;
    me.setInformation(420112022, 21, 2020);
    meCy.setInformation(42112077, 19, 2021);
    me.showInformation();
    meCy.showInformation();

    return 0;
}