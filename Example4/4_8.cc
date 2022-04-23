// 使用联合体保存成绩信息，并且输出
#include <iostream>
#include <string>
using namespace std;

class ExamInfo
{
  public:
    // 三种构造函数，分别用等级，是否通过， 和百分来初始化
    ExamInfo(string name, char grade) : name(name), mode(GRADE), grade(grade)
    {
    }
    ExamInfo(string name, bool pass) : name(name), mode(PASS), pass(pass)
    {
    }
    ExamInfo(string name, int percent) : name(name), mode(PERCENTAGE), percent(percent)
    {
    }
    void show();

  private:
    string name;
    enum
    {
        GRADE,
        PASS,
        PERCENTAGE
    } mode;
    union {
        char grade;
        bool pass;
        int percent;
    };
};

void ExamInfo::show()
{
    cout << name << ":";
    switch (mode)
    {
    case GRADE:
        cout << grade;
        break;
    case PASS:
        cout << (pass ? "PASS" : "FAIL");
        break;
    case PERCENTAGE:
        cout << percent;
        break;
    }
    cout << endl;
}

int main(void)
{
    ExamInfo course1("English", 'B');
    ExamInfo course2("Calculus", true);
    ExamInfo course3("C++ Programming", 85);
    course1.show();
    course2.show();
    course3.show();
    return 0;
}