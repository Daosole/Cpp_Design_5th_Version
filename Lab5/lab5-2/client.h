#ifndef _CLIENT_H
#define _CLIENT_H

class Client
{
private:
    static int ClientNum;
    static char ServerName;
    int origin; // 原来的客户机数量

public:
    Client() : origin(10)
    {
        ClientNum = origin;
    }

    Client(Client &c);
    ~Client();

    static void ChangeServerName(char name);
    void add(int newCli);
    static void show();
};

#endif