#include <iostream>
#include "book.h"

using namespace std;

int main()
{
  Book book1("12345","Introduction to C++", 120.00);
  Book book2("76458","Introduction to Database", 150.00);

  // cout << "book1 created for hire:" <<
  cout << "reference book" << book1.displayTitle();
  cout << "Text book" << book2.displayTitle();

}
