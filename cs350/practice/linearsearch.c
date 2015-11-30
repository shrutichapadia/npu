
/* File: linear.c */
/* Linear Search */
#include <stdio.h>
#define SIZE 5
#define NOT_FOUND -1
int Search(int a[], int target)
{
int i;
for (i = 0; i < SIZE; i++)
{
if (a[i] == target)
return i;
}
return NOT_FOUND;
}

int main()
{
int a[5] = {77, 44, 99, 66, 22};
int target, index;
printf("Enter the target number: ");
scanf("%d", &target);
index = Search(a, target);
if (index != NOT_FOUND)
printf("Target is found at index: %d\n", index);
else
printf("Target is not found.\n");
return 0;
}
