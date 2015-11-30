#include <stdio.h>
int find(int a[],int n,int value);
int display(int a[], int n);
int create (int a[], int n);
int create (int a[], int n)
{
	int i;
	for (i=0; i<n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
  return 0;
}
int display(int a[], int n)
{
	int i;
	for(i=0;i<n; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
  return 0;
}
int find(int a[],int n,int value){
	int i;
	for(i=0; i<n; i++)
	{
	if (a[i]==value){
		return value;
	}
	}

	return (-1);


}

int main()
{
	int arr[10];
	int value;
	int n = 6;
	create(arr, n);
	printf("\n Original array : ");
	display(arr, n);
	find(arr,n, 4);

	if(n<sizeof(arr))
	{
	find(arr, n, 4);
		n++;
		printf("\n array after find:");
		scanf("%d\n", &value);

	display(arr, n);
	}
	else
	printf("Array is full,find is void.\n");
	return 0;
}
