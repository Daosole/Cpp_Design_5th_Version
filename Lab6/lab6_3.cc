//字符串连接
#include <iostream>
using namespace std;

int main(void)
{
    char s1[100], s2[50];
    cout << "Enter two strings: " << endl;
    cout << "String1: ";
    cin.getline(s1,100);
    cout << "String2: ";
    cin.getline(s2,50);
    int i = 0, j = 0;
    while (s2[j] != '\0')
    {
        j++;
    }
    i = j;
    for (j = 0; s2[j] != '\0'; j++)
    {
        s1[i++] = s2[j];
    }
    s1[i] = '\0';

    cout << "After Linked" << endl;
    cout << s1;
    return 0;
}