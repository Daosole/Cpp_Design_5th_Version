// do while 语句求 1~10 的和
#include <iostream>
using namespace std;
int main(void)
{
    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while(i <= 10);
    cout << "sum = " << sum << endl;

    return 0;
}