#include <iostream>
using namespace std;
class Student
{
  public:
    void setInfomation(int cl, int id, int ag = 18); // 带默认值的位于最后
    void showInfomation();

  private:
    int ClassNo, idNo, age;
};
// 成员函数的实现
void Student::setInfomation(int cl, int id, int ag)
{
    ClassNo = cl;
    idNo = id;
    age = ag;
}

void Student::showInfomation()
{
    cout << ClassNo << ":" << idNo << ":" << age << endl;
}

// 主函数
int main(void)
{
    Student me;
    cout << "default" << endl;
    me.setInfomation(0, 0);
    me.showInfomation();
    cout << "second" << endl;
    me.setInfomation(2021, 42, 19);
    me.showInfomation();
    return 0;
}