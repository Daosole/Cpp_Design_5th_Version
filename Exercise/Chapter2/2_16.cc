// 数据类型的字节数
#include <iostream>
using namespace std;

int main(void)
{
    cout << "This size of an int is: \t\t" << sizeof(int) << " bytes.\n";
    cout << "This size of a short is: \t\t" << sizeof(short) << " bytes.\n";
    cout << "This size of a long int is: \t\t" << sizeof(long) << " bytes.\n";
    cout << "This size of a char is: \t\t" << sizeof(char) << " bytes.\n";
    cout << "This size of a float is: \t\t" << sizeof(float) << " bytes.\n";
    cout << "This size of a double is: \t\t" << sizeof(double) << " bytes.\n";

    return 0;
}