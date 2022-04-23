#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int num;
    string name;
    char sex;
    int age;
};

int main(void)
{
    Student stu = {97001, "Lin Lin", 'F', 19};
    cout << "Num: " << stu.num << endl;
    cout << "Name: " << stu.name << endl;
    cout << "Sex: " << stu.sex << endl;
    cout << "Age: " << stu.age << endl;
    return 0;
}