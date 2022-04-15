#include <iostream>
using namespace std;

int main(void)
{
    int myAge = 39;
    int yourAge = 39;
    cout << "I am: " << myAge << " years old.\n";
    cout << "You are: " << yourAge << " years old.\n";
    myAge++;
    ++yourAge;
    cout << "One year passes..." << endl;
    cout << "I am: " << myAge << " years old.\n";
    cout << "You are: " << yourAge << " years old.\n";

    cout << "Another year passes." << endl;
    cout << "I am: " << myAge++ << " years old.\n";
    cout << "You are: " << ++yourAge << " years old.\n";

    cout << "Let's print it again." << endl;
    cout << "I am: " << myAge << " years old.\n";
    cout << "You are: " << yourAge << " years old.\n";

    return 0;
}