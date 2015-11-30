
// operatorOverload10_prog.cpp demonstrates use of overloading the operators
#include <iostream>
#include "OperatorOverload.h"
using namespace std;
int main()
{
Measures first(0), second(0), third(0), c(0);
int f, i;
char response;
cout << "\n\t This program demonstrates the use of operator overloading: ";
cout << "\n\t ********************************************************** \n";
cout << "\n\t Enter a dinstance in feet and inches for first (like 9 3): ";
cin >> f >> i;
first.setLength(f, i);
cout << "\n\t Enter a dinstance in feet and inches for second (like 9 3): ";
cin >> f >> i;
second.setLength(f, i);
// Test the overloaded operators + and - with objects just created
cout << "\n\n\t Demonstrating Arithmetic + and - overloaded operators: \n" <<
endl;
cout << "\t ****************************************************** \n" << endl;
third = first + second;
cout << "\n\t first + second = ";
cout << third.getFeet() << " feet, ";
cout << third.getInches() << " inches. \n";
third = first - second;
cout << "\n\t first - second = ";
cout << third.getFeet() << " feet, ";
cout << third.getInches() << " inches. \n";
// Test the overloaded relational operators with objects just created
cout << "\n\n\t Demonstrating the overloaded relational operators: \n" << endl;
cout << "\t ************************************************** \n" << endl;
cout << "\n\t first == second is ";
if (first == second) cout << " true \n "; else cout << " false \n" << endl;
cout << "\t first < second is ";
if (first < second) cout << " true \n"; else cout << " false \n" << endl;
cout << (first < second) ? " true \n" : " false \n";
cout << "\t first > second is ";
if (first > second) cout << " true \n"; else cout << " false \n" << endl;
// Test the overloaded arithmetic operators with objects just created
cout << "\n\n\t Demonstrating the overloaded prefix ++ operator \n" << endl;
cout << "\t ************************************************ \n" << endl;
for (int count = 0; count < 4; count++)
{
cout << "\n\t first = ++second; // prefix ++ operation" << endl;
first = ++second;
cout << "\t first: " << first << ". second: " << second << ". \n";
cout << "\n\t first = ++second + 10; // prefix ++ operation" << endl;
first = ++second + 10;
cout << "\t first: " << first << ". second: " << second << ". \n";
}
cout << "\n\n\t Demonstrating the overloaded postfix ++ operator \n" << endl;
cout << "\t ************************************************* \n" << endl;
for (int count = 0; count < 4; count++)
{
cout << "\n\t first = second++; // postfix ++ operation" << endl;
first = second++;
cout << "\t first: " << first << ". second: " << second << ". \n";
cout << "\n\t first = second++ + 10; // postfix ++ operation" << endl;
first = second++ + 10;
cout << "\t first: " << first << ". second: " << second << ". \n";
}
// Test the overloaded arithmetic operators with objects just created
cout << "\n\n\t Demonstrating the overloaded prefix -- operator \n" << endl;
cout << "\t ************************************************ \n" << endl;
for (int count = 0; count < 4; count++)
{
cout << "\n\t first = --second; // prefix -- operation" << endl;
first = --second;
cout << "\t first: " << first << ". second: " << second << ". \n";
}
cout << "\n\n\t Demonstrating the overloaded postfix -- operator \n" << endl;
cout << "\t ************************************************* \n" << endl;
for (int count = 0; count < 4; count++)
{
cout << "\n\t first = second--; // postfix -- operation" << endl;
first = second--;
cout << "\t first: " << first << ". second: " << second << ". \n";
}
// Test the overloaded relational operators with objects just created
cout << "\n\n\t Demonstrating the overloaded stream input and output operators \n"
<< endl;
cout << "\t ************************************************************** \n" <<
endl;
cin >> c;
cout << "\t You entered: " << c << "." << endl;
cout << "\n Please enter your response 'q' or 'Q' to quit: ";
cin >> response;
return 0;
}
