// OperatorOverload.cpp the definition file forUnary Operator Overloading
#include "OperatorOverload.h"
Measures operator+ (Measures a, Measures b)
{
return Measures (a.lenInches + b.lenInches);
}
Measures operator- (Measures a, Measures b)
{
return Measures (a.lenInches - b.lenInches);
}
bool operator< (Measures a, Measures b)
{
return a.lenInches < b.lenInches;
}
bool operator>(Measures a, Measures b)
{
return a.lenInches > b.lenInches;
}
bool operator== (Measures a, Measures b)
{
return a.lenInches == b.lenInches;
}
// overloaded output stream operators
ostream &operator<< (ostream &out, Measures a) //overloaded ostream operator
{
out << a.getFeet() << " feet " << a.getInches() << " inches ";
return out;
}
// overloaded input stream operators
istream &operator>> (istream &inp, Measures &a) //overloaded ostream operator
{
int feet, inches;
cout << "\n\t Enter feet: ";
inp >> feet;
cout << "\n\t Enter inches: ";
inp >> inches;
// Modify the object with the data and return
a.setLength(feet, inches);
return inp;
}
// overloaded prefix increment operators
Measures &Measures ::operator++ ()
{
lenInches++;
return *this;
}
// overloaded postfix increment operators
Measures Measures ::operator++ (int)
{
Measures temp = *this;
lenInches++;
return temp;
}
// overloaded prefix decrement operators
Measures &Measures ::operator-- ()
{
lenInches--;
return *this;
}
// overloaded postfix decrement operators
Measures Measures ::operator-- (int)
{
Measures temp = *this;
lenInches--;
return temp;
}
