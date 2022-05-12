#ifndef _CLIENT_H_
#define _CLIENT_H

class Client
{
  private:
    static int ClientNum;
    static char ServerName[5];
    char brand; // 品牌 Levon Hp Dell 
    int id;

  public:
    Client();
    ~Client();
    Client(Client &c);
    static void ChangeServerName(char name[]);
    void show();
};

#endif