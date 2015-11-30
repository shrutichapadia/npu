// sum of matrix 2D arrays
#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int r,c;
  // int matrix1[2][2];
  // int matrix2[2][2];
  int sumofmatrix[r][c];
  int matrix1[2][2] =  {{01,02},
                      {04,05} };

  int matrix2[2][2] = {{07,13},
                      {10,11}};

  for(r =0; r<3; r++){
    for(c =0; c<3; c++){
      // cin >> matrix1[r][c];
      // cout << " matrix1 [" << r << "][" << c << "] : ";
      // cin >> matrix1[r][c];
      //
      // cout << " matrix2 [" << r << "][" << c << "] : ";
      // cin >> matrix2[r][c];
      sumofmatrix[r][c] = matrix1[r][c] + matrix2[r][c];

    }
  }
  cout << "sum of matrix" << sumofmatrix[r][c];

  return 0;

}
