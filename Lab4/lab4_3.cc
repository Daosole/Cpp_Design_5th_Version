#include <iostream>
using namespace std;

class Date
{
  private:
    int year;
    int month;
    int day;

  public:
    Date() : year(0), month(0), day(0)
    {
    }
    Date(int y, int m, int d) : year(y), month(m), day(d)
    {
    }
    void setBrith();
    int getY()
    {
        return year;
    };
    int getM()
    {
        return month;
    };
    int getD()
    {
        return day;
    };
    ~Date()
    {
        cout << "Date class Destructors work!" << endl;
    }
};

void Date::setBrith()
{
    int yy, mm, dd;
    cout << "Enter the birthday:" << endl;
    cin >> yy >> mm >> dd;
    year = yy;
    month = mm;
    day = dd;
}

class People
{
  private:
    int number;
    char sex;
    Date birthday;
    long Id;

  public:
    People(int num, char s, Date bir, long id) : number(num), sex(s), birthday(bir), Id(id)
    {
    }
    People(People &p);
    void show();
    void setInfo(int num, char s, Date bir, long id);
    ~People()
    {
        cout << "People class Destructors work!" << endl;
    }
};

People::People(People &p)
{
    number = p.number;
    sex = p.sex;
    birthday = p.birthday;
    Id = p.Id;
}

void People::show()
{
    cout << "The identification" << endl;
    cout << "\tNumber:" << number << endl;
    cout << "\tsex:" << sex << endl;
    cout << "\tBirthday:" << birthday.getY() << birthday.getM() << birthday.getD() << endl;
    cout << "\tId:" << Id << endl;
}

void People::setInfo(int num, char s, Date bir, long id)
{
    number = num;
    sex = s;
    birthday = bir;
    Id = id;
}

int main(void)
{
    Date birth(1996, 05, 23);
    Date b2;
    b2.setBrith();
    People a(4001, 'F', birth, 100110119120);
    People b = a;
    a.show();
    b.show();
    a.setInfo(4003, 'M', b2, 10001001029);
    a.show();

    return 0;
}