#include <iostream>
#include <string>

using namespace std;

void setcourse(string course);
string getcourse();
void setcourse2(string course2);
string getcourse2();
class student {
    protected:
     int id;
     string name;
     int age;
   public:
   void set_values(int id, string name,int age);
      student(){
     cout << "Enter your ID :";
     cin >> id;
     cout << "Name  :";
     cin >> name;
     cout << "Age :";
     cin >> age;
        }
   };
class GraduateStudent : public student {
   public:     string specialisation (){return "JAVA";}

   };
class UnderGraduateStudent {
  public:    string  specialisation (){

    {return "DBMS";}
  }

  };
class course {
public:
  void setcourse(string course){

  }
  //function to get title
  string getcourse(){
    return "MSCS";
  }

  void setcourse2(string course2){

  }
  // function to get title
  string getcourse2(){
    return "CS";
  }
  };
 int main () {
   int age;
   cout << "Enter student detail to check graduation: \n\n";
   GraduateStudent GS;
   course c;
   UnderGraduateStudent UGS;
   if(age <= 23){
   cout << "Course :" << c.getcourse() << "----------"  << "specialisation in " << GS.specialisation() << endl;
    }
    else
   cout << "Course :" << c.getcourse2() << "----------"  << "specialisation in " << UGS.specialisation() << endl;

 return 0;
 }
