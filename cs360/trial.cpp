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
virtual void execute(double amt) =0;

 };
class Withdraw: public bankaccount {
  public:  void execute (double amount)       {
  (this.balance=this.balance - amount);
 }
 };
class Deposit: public bankaccount {
   public:  void execute (double amount)       {
  (this.balance=this.balance + amount);
 }
 };
int main ()
{
Withdraw wid;
Deposit depo;




bankaccount * depo1 = &depo;

depo1->set_values (1,500);



depo1->execute(300) ;
cout << depo1->balance<< endl;
//cout << ppoly2->execute() << endl;

return 0;
}




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
virtual void execute(double amt) =0;

 };
class Withdraw: public bankaccount {
  public:  void execute (double amount)       {
  (this.balance=this.balance - amount);
 }
 };
class Deposit: public bankaccount {
   public:  void execute (double amount)       {
  (this.balance += amount);
 }
 };
int main ()
{
Withdraw wid;
Deposit depo;




bankaccount * depo1 = &depo;

depo1->set_values (1,500);



depo1->execute(300) ;
cout << depo1->balance<< endl;
//cout << ppoly2->execute() << endl;

return 0;
}
