#include <iostream>
#include <string>
using namespace std;

int main()
{
  int i;
  int array[10];
  int max = 0;
  int min = 999;


  cout << "Enter 10 elements number for array"  << endl;
  cin >> array[i];
  for (i=0; i <array[i]; i++){
    if(array[i] > max){
      max = array[i];
    }
    if(array[i] < min){
      min = array[i];
    }

    cout << "Maximum number is :" << max << endl;
    cout << "Minimum number is :" << min << endl;

  }

  return 0;

}
