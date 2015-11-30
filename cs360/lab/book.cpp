#include <iostream>
# include "book.h"

using namespace std;
// constructor initialises book name,isbn,and price
Book::Book(string isbn, string title, float price)
{
  isbn (new isbn);      /allocation of dynamic memory
  title (new title);
  price (new price);
}
//function to set isbn
void Book::setIsbn(string isbn)
{
  isbn = new isbn;
}
// function to get isbn
string getIsbn()
{
  return isbn;
}
//function to set title
void Book::setTitle(string title)
{
  title = new title;
}
// function to get title
string getTitle()
{
  return title;
}
//function to set price
void Book::setPrice(float price)
{
  price = new price;
}
// function to get price
float getPrice()
{
  return price;
}
// function to display message
void Book::displayTitle()
{
  cout << "wellcome to Bookstore **** book for \n" << getTitle() << "!" <<endl;

}
