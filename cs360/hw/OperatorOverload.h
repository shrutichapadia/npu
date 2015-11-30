#include <iostream>
using namespace std;
#include <string>
class Measures
{
private:
int lenInches;
public:
// constructor 1 for class Measures
Measures(int feet, int inches)
{
setLength(feet, inches);
}
// constructor 2 for class Measures
Measures(int inches) { lenInches = inches; }
// member function to get feet from inches
int getFeet() { return lenInches / 12; }
// member function to get feet from inches
int getInches() { return lenInches % 12; }
// member function to set feet and inches
void setLength(int feet, int inches)
{
lenInches = 12 * feet + inches;
}
// friend functions for overloaded relational operators
friend Measures operator+ (Measures a, Measures b);
friend Measures operator- (Measures a, Measures b);
friend bool operator< (Measures a, Measures b);
friend bool operator> (Measures a, Measures b);
friend bool operator== (Measures a, Measures b);
// friend functions for overloaded prefix arithmetic operators
Measures &operator++ (); // pr-efix increment operator
Measures operator++ (int); // postfix increment operator
Measures &operator-- (); // pre-fix decrement operator
Measures operator-- (int); // postfix decrement operator
// friend functions for overloaded input output stream operators
friend ostream &operator<< (ostream &out, Measures a); //overloaded
ostream operator
friend istream &operator>> (istream &inp, Measures &a); //overloaded
ostream operator
};
