#include <iostream>
using namespace std;

class Book
{
private:
	string isbn;
	string title;
	float price;
public:
Book(string , string , float);
void setIsbn(string);
string getIsbn();
void setTitle(string);
string getTitle();
void setPrice(float);
float getPrice();
void displayTitle();
};
