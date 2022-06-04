// 使用 string 类
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s1, s2;
    cout << "Enter two strings: " << endl;
    cout << "String1: ";
    getline(cin, s1);
    cout << "String2: ";
    getline(cin, s2);

    s1 += s2;

    cout << "After Linked: " << endl;
    cout << s1 << endl;
    return 0;
}