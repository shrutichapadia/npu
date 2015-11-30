#include <iostream>
#include <cmath>

using namespace std;

float intsum(float a, float b){
  float sum = a + b;
  return sum;
}
int intproduct(int i,int j){
  int product = i * j;
  return product;
}
int pow(int x, int y){
  // int pow = (x ^ y); //power of value 
  int pow = (x <<y);
  return pow;
}
int main(){
  float x =5.5;
  float y =10.0;
  int a = 2;
  int b = 8;

  cout << intsum (x,y)<< endl;
  cout << intproduct (a,b) << endl;
  cout << pow (a,b) << endl;

  return 0;

}
