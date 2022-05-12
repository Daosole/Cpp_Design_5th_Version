// 类的实现
#include "client.h"
#include <iostream>
using namespace std;

int Client::ClientNum = 0;
char Client::ServerName[5] = "snnu";

Client::Client(Client &c)
{
    ClientNum = c.ClientNum;
    ServerName[5] = c.ServerName[5];
}

Client::~Client()
{
    cout << "Destructors function called" << endl;
}

void Client::ChangeServerName(char name[5])
{
    ServerName[5] = name[5];
}

void Client::show()
{
    cout << "ClientNumber:" << ClientNum << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "ServerName:" << ServerName[i] << endl;
    }
}