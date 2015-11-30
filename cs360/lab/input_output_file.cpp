// writing on a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

  ofstream myfile ("example.txt");
  string name; int id;
  cout << "Enter student name & ID:\n";
  cin >> name;
  cin >> id;
  if (myfile.is_open())
  {
    myfile << name;
    myfile << id;
    myfile.close();
  }
  else cout << "Unable to open file";

  ifstream yourfile ("example.txt");
  string line;
  if (yourfile.is_open())
  {
    while (getline (yourfile,line))
    {
      cout << line << '\n';
    }
    yourfile.close();
  }
  else cout << "Unable to open file";


  return 0;
}
