#include <stdio.h>
#include <stdlib.h>

int formula_ackermann(int m,int n) {
    while(1) {
        switch(m) {
        case 0:  return n + 1;
        case 1:  return n + 2;
        case 2:  return (n << 1) + 3;
        case 3:  return (1 << (n+3)) - 3;
        default:
            if (n == 0) {
                n = 1;
            } else {
                n = formula_ackermann(m, n - 1);
            }
            m--;
        }
    }
}
int main()
{
  int cal;
  int m, n, result;
    m = 3;
    n = 0;
    printf(" when value of m = 3 , and n = 0:");
    result = formula_ackermann(m, n);
    printf("\ncalculattion of  Ackerman’s number:   %d\n", result);

}
