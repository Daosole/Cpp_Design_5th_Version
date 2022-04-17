#include <iostream>
using namespace std;

struct Time
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
} t;

int main(void)
{
    cout << "Please enter time(yyyy-mm-dd-hh-mm-ss):";
    cin >> t.year;
    cin >> t.month;
    cin >> t.day;
    cin >> t.hour;
    cin >> t.minute;
    cin >> t.second;
    cout << "The time is:" << endl;
    cout << t.year << "-" << t.month << "-" << t.day << " " << t.hour << ":" << t.minute << ":" << t.second << endl;

    return 0;
}