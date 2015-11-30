#include <stdio.h>

int create (int a[], int n);
int display(int a[], int n);
int insert (int a[], int n, int item, int pos);
int sort (int a[], int n);

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
int insert (int a[], int n, int item, int pos)
	{
		int i;
		for(i=n; i>=pos; i--)
		{
		a[i]=a[i-1];
		}
		a[pos]=item;
    return 0;
	}
int sort (int a[], int n)   //Bubble Sort
{
	int temp, i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1)-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
  return 0;
}
int main()
{
	int arr[10];
	int arr2[7]={2,6,4,7,5,1,3};
	int n=6;
	create(arr, n);
	printf("\n Original array : ");
	display(arr, n);

	if(n<sizeof(arr))
	{
	insert(arr, n, 40, 3);
		n++;
		printf("\n array after insertion of 40:");
	display(arr, n);
	}
	else
		printf("Array is full, insertion is void.\n");
	// deleteItem(arr, n, 30);
	// deleteItem(arr, n, 5);

	printf("\n *************************************** ");
	printf("\n before sort: ");
	display(arr2,7);
	sort(arr2, 7);
	printf("\n after sort: ");
	display(arr2,7);

  return 0;

}
