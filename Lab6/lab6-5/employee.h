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
    Employee(const char *name, const char *addr, const char *city, const char *zip, const char sex);
    ~Employee();
    void change_name(const char *name);
    void display();
};

#endif