#include <iostream>
using namespace std;

int main(void)
{
    unsigned int x;
    unsigned int y = 100;
    unsigned int z = 50;
    x = y - z;
    cout << "Diffenerce is:" << x << endl;
    x = z - y;
    cout << "\nNow difference is: " << x << endl;
    return 0;
}