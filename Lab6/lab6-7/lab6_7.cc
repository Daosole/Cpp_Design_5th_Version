#include "datepeople.h"
#include <iostream>
using namespace std;

int main(void)
{
    Date bir;
    People pe[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the NO." << i + 1 << "'s information" << endl;
        pe[i].set();
    }
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "The No." << i + 1 << "'s information is: " << endl;
        pe[i].show();
    }
    cout << endl;

    return 0;
}