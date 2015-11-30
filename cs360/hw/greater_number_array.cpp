// greater number in array
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int i, n;
  int array[100];

  while (n>100 || n<=0)
    {
        cout << "Enter the number index of array : ";  // declare how many number in array
        cin >> n;
    }
// enter value in of array
  for (i=0; i <n; i++){
    cout << "Enter  elements number for array  " << i+1 << ":";
    cin >> array[i];
  }
  // compare element with previous element and keep higher number
    for (i=1; i<n; i++){
      if(array[0] < array[i]){
      array[0] = array[i];
    }

    }
    cout << "Greater number is :" << array[0] << endl;

  return 0;

}
