#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{
    char choice;
    while (1)
    {
        cout << "Menu: A(dd) D(elete) S(ort) Q(uit), select one: ";
        cin >> choice;
        switch (toupper(choice))
        {
        case 'A':
            cout << "数据已经增加." << endl;
            break;
        case 'D':
            cout << "数据已经删除." << endl;
            break;
        case 'S':
            cout << "数据已经排序." << endl;
            break;
        case 'Q':
            exit(0);
            break;
        default:;
        }
    }
    return 0;
}