#include "client.h"
#include <iostream>
using namespace std;

int main(void)
{
    Client a;
    a.add(5);
    Client::ChangeServerName('G');
    a.show();
    
    Client b(a);
    b.add(12);
    Client::ChangeServerName('D');
    b.show();

    return 0;
}