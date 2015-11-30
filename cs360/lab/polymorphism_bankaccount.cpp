#include <iostream>
using namespace std;

class bankaccount{
   protected:
   int accountnumber;
   //double amount;
   double balance;
   public:
void set_values (int a, double b)       {
 accountnumber = a; balance = b;
 }
virtual double execute (double amount) =0;
 };
class Cwithdraw: public bankaccount {
  public:     double execute (double amount)       {
 return (balance - amount);
 }
 };
class Cdeposit: public bankaccount {
   public:     double execute (double amount)       {
 return (balance + amount);
 }
 };
int main ()
{
Cwithdraw wid;
Cdeposit depo;

bankaccount * ppoly2 = &depo;
bankaccount * ppoly1 = &wid;

ppoly1->set_values (13345,500);
ppoly2->set_values (12345,400);

cout << "Account 13345 balance after Withdraw:" << ppoly1->execute(200) << endl;
cout << "Account 12345 balance after Deposit :" << ppoly2->execute(2100) << endl;

return 0;
}
