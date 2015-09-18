//
//  recursiveMinimum.c
//  labwk3
//
//  Created by Temp on 7/19/15.
//  Copyright (c) 2015 shruti. All rights reserved.
//

//#include "recursiveMinimum.h"
//
//#include <stdio.h>
//
//int main()
//
//{
//    
//    int a[10]={1,8,6,0,-5,-9,9,11,-65,90};
//    printf("Minimum value : %d",recursiveMinimum(a,9));
//    
//    return 0;
//}
//
//int recursiveMinimum(int a[],int size)
//{
//    if(size>=0){
//        if(a[size-1]>a[size]){
//            a[size-1]=a[size];
//        }
//        return recursiveMinimum(a,size-1);
//    }
//    
//    return a[size];
//}


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
int main(void)
{
    int a[] = {77, 44, 99, 66, 22};
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



