#include <iostream>
using namespace std;

int x = 5, y = 7;

void myFunction()
{
    int y = 10;
    cout << "x from myFunction: " << x << endl;
    cout << "y from myFunction: " << y << endl;
}

int main()
{
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
    cout << endl;
    myFunction();
    cout << "Back from myFunction!" << endl;
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
    return 0;
}