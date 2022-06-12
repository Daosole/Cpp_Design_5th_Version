#include <iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main()
{
    int iN, power;
    double dN;
    int iA;
    double dA;
    cout << "Enter an int base number: ";
    cin >> iN;
    cout << "Enter a double base number: ";
    cin >> dN;
    cout << "To what power? ";
    cin >> power;
    iA = getPower(iN, power);
    dA = getPower(dN, power);
    cout << iN << " to the " << power << "th power is " << iA << endl;
    cout << dN << " to the " << power << "th power is " << dA << endl;
    return 0;
}

int getPower(int x, int y)
{
    if (y == 1)
        return x;
    else if (y == 0)
        return 1;
    else if (y < 0)
        return 0;
    else
        return (x * getPower(x, y - 1));
}

double getPower(double x, int y)
{
    if (y == 1)
        return x;
    else if (y == 0)
        return 1;
    else if (y < 0)
        return 1 / getPower(x, -y);
    else
        return (x * getPower(x, y - 1));
}