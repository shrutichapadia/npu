#include <stdio.h>
#include <stdlib.h>


 int reverse()
{
  int num;
  int rev = 0;
    if (num < 10) {
        rev = rev*10 + num;
    }
    else {
        rev = rev*10 +(num %10);
       num = reverse(num/10);

    }
    return rev;
}
int main()
{
  int value;

  printf("%d please enter number to reverse:", value);
  scanf("%d", &value);
  printf("\nNumber after reverse:");
  reverse();
  printf("\n ******************************");

  return 0;

}
