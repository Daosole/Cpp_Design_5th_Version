#include "client.h"
#include <iostream>
using namespace std;

int main(void)
{
    Client a;
    a.show();
    a.ChangeServerName("test");
    Client b(a);
    b.show();
    b.ChangeServerName("pla");
    return 0;
}