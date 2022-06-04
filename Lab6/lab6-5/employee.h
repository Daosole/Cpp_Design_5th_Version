#ifndef __EMPLOYEE_H_
#define __EMPLOYEE_H_

class Employee
{
  private:
    char Name[7];     // 姓名
    char Address[50]; // 地址
    char City[20];    // 城市
    char Zip[6];      // 邮编
    char Sex;         // F or M 性别

  public:
    Employee(char *name, char *addr, char *city, char *zip, char sex);
    ~Employee();
    void change_name(char *name);
    void display();
};

#endif