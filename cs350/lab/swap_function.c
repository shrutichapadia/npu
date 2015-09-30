// swap_integer value between x and y
#include <stdio.h>
void swap_integer (int *x, int *y);
int main()
{
    int a = 10;
    int b = 20;

    swap_integer (&a , &b);
    printf("a = %d , b = %d \n", a , b );


    return 0;
}
// function swap
void swap_integer (int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
