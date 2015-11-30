#include <stdio.h>

void create (int a[], int n)
{
	int i;
	for (i=0; i<n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void display(int a[], int n)
{
	int i;
	for(i=0;i<n; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
}
void insert (int a[], int n, int item, int pos)
	{
		int i;
		for(i=n; i>=pos; i--)
		{
		a[i]=a[i-1];
		}
		a[pos]=item;
	}

// int sort (int a[], int n)   //Bubble Sort
// {
// 	int temp, i,j;
// 	for(i=0;i<n-1;i++)
// 	{
// 		for(j=0;j<(n-1)-i; j++)
// 		{
// 			if(a[j]>a[j+1])
// 			{
// 				temp=a[j+1];
// 				a[j+1]=a[j];
// 				a[j]=temp;
// 			}
// 		}
// 	}
// 	return 0;
// }

// int largest(int a[], int n){
//
// 	int max = 0;
// 	for(i=0; i<n-1,i++){
// 		if(a[i]> max){
// 			max =a[i];
// 		}
// 		return max;
// 	}
//
// }
int largest(int arr[], int low, int high)
{
   int max = arr[low];
   int i;
   for (i = low; i <= high; i++)
   {
       if (arr[i] > max)
          max = arr[i];
   }
   return max;
}

int main()
{
	int arr[10];
	int newarr[10];
	int arr2[7]={2,6,4,7,5,1,3};
	int n=10;
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
	while(arr[i]>max){
	largest(arr, n,i);
	printf("%d\n - largest number",arr[i]);
	insert(newarr,n,arr[i],newarr[0]);
	printf("\n new array: ");
	display(newarr,10)
	}

	// printf("\n before sort: ");
	// display(arr,10);
	// sort(arr, 10);
	// printf("\n after sort: ");
	// display(arr,10);

}
