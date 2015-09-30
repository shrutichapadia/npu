#include <stdio.h>
void test(int *a);
int main()
{
  int n = 13;
// this is value of n will print
  printf("%d\n", n);
  test (&n);          //this will take value from address a = *a
  printf("%d\n", n);    // now value of n = same as test function because it call value by reference

}

void test(int *a){
  *a = *a+5;
  printf("%d\n",*a);
}
