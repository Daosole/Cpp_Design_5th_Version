// 类的实现
#include "client.h"
#include <iostream>
using namespace std;

int Client::ClientNum = 0;
char Client::ServerName = 'S'; // 静态数据成员 类外定义初始化

Client::Client(Client &c)
{
    ClientNum = Client::ClientNum; // 静态成员使用类名
    ServerName = Client::ServerName;
    origin = c.origin;
}

Client::~Client()
{
    cout << "Destructors function called" << endl;
}

void Client::ChangeServerName(char name)
{
    Client::ServerName = name;
}

void Client::add(int newCli)
{
    ClientNum += newCli;
}

void Client::show()
{
    cout << "ClientNumber: " << ClientNum << endl;
    cout << "New ServerName is: " << ServerName << endl;
}