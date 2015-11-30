#include <iostream>
#include <string>
using namespace std;

int main()
{
  int row,space,i,j;

  cout << "please enter row of piramid: ";
  cin >> row;

  for (i=0; i<row; i++) {

    for (space=1; space < row-i-1; space++) {
          cout << " ";
      }
    for (j=0; j<2*i+1; j++){

      cout << "*";

    }
      cout << "\n";
  }
      return 0;

}
