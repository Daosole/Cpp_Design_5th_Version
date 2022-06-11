#include <iostream>
#include "Trapzint.h"
#include <iomanip>
using namespace std;

int main(void)
{
    MyFunction f;
    Trapz trapz(f);

    cout << "TRAPZ Int: " << setprecision(7) << trapz(0,2,1e-7) << endl;
    return 0;
}