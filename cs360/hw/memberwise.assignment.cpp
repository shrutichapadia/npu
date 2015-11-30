// member_wise_assign.cpp : implements Memberwise Assignment of class objects
//
#include <iostream>
#include <string>
using namespace std;
class Date
{
public:
Date(int = 1, int = 1, int = 2007);
void print();
void changeDate(int, int, int);
private:
int month;
int day;
int year;
};
Date::Date (int m, int d, int y)
{
month = m;
day = d;
year = y;
}
void Date::print ()
{
cout << month << '/' << day << '/' << year;
}
void Date::changeDate(int m, int d, int y)
{
month = m;
day = d;
year = y;
}
int main()
{
Date date1(8, 8, 2008);
Date date2;
char response;
cout << "\n\t Printing Memberwise Assignment of Dates";
cout << "\n\t ***************************************";
cout << "\n\t date1 = ";
date1.print();
cout << "\n\n\t date2 = ";
date2.print();
date2 = date1;
cout << "\n\n\t After default memberwise assignment:";
cout << "\n\t date2 = ";
date2.print();
cout << endl;
cout << "\n\t date1 = ";
date1.print();
cout << endl;
date2.changeDate(10, 7, 2015);
cout << "\n\n\t After change date of date2:";
cout << "\n\t date2 = ";
date2.print();
cout << endl;
cout << "\n\t date1 = ";
date1.print();
cout << endl;
cout << "\n\n\t Please enter 'Q' or 'q' to quit: " << endl;
cin >> response;
return 0;
}
