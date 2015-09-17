////
////  main.c
////  labwk3
////
////(Gas Mileage)
//// Drivers are concerned with the mileage obtained by their automobiles.
//// One driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful.
//// Develop a program that will input the miles driven and gallons used for each tankful.
//// The program should calculate and display the miles per gallon obtained for each tankful.
//// After processing all input information, the program should calculate and print the combined miles per gallon obtained for all tankfuls.
//// Here is a sample input/output dialog:
////  Created by Temp on 5/29/15.
////  Copyright (c) 2015 shruti. All rights reserved.
//
//// input the miles per gallon obtained for each tankful
////calculate and display the miles per gallon obtained for each tankful
//// calulate combine miles per gallon obtained for all tankfuls
//// take -1 to end input
//// after receiving -1 as input get some of all things and display
//
//
//#include <stdio.h>
//#include <float.h>
//#define SIZE
//
////int main(){
////
////        float gallons;
////        int miles;
////        float avg = 0.00;
////
////        int totalGallons = 0;
////        int totalMiles = 0;
////        
////        do {
////                printf("\nEnter the gallons : ");
////                scanf("\n%f", &gallons);
////                if(gallons != -1){
////                        printf("Enter the miles : " );
////                        scanf("\n%d", &miles);
////                        
////                        avg = miles / gallons;
////                        printf("\n%f", avg);
////                        
////                        totalGallons += gallons;
////                        totalMiles += miles;
////                }
////                
////        } while ( gallons != -1 );
////        
////        if(totalGallons > 0 && totalMiles > 0){
////                avg = totalMiles / totalGallons;
////        }
////        printf("\n=======================================");
////        printf("\nTotalMiles : ");
////        printf("%d", totalMiles);
////        printf("\nTotalGallons : ");
////        printf("%d", totalGallons);
////        printf("\nFinal Avg : ");
////        printf("%f", avg);
////        printf("\n=======================================");
////
////    return 0;
////
////}
////
////int main()
////{
////        int x = 1;
////       
////       
////        
////        while ( x <= 9) {
////                
////                printf( "%d", x);
////                if ( (x % 3) == 0)
////                        printf("\n");
////                        else
////                        printf(",");
////                
////                x++;
////        }
////        return 0;
////
////}
////#include <stdio.h>
////int main()
////{
////        int i = 1;
////        int product = 1;
////       
////        
////        while (i <= 10)
////        {
////                product *= i;
////                i++;
////              
////        }
////        
////        
////        printf("%d\n", product);
////        
////        printf("\n");
////
////return 0;
////
////}
//
//                        
////
////int i = 1;
////int sum = 0;
////
////while ( i <= 10)
////sum += num;
////i++;
////}
////printf("%.2f\n", sum /10.0);
//
//
//
////
////#include <stdio.h>
////int sum(int*x, int*y);
////
////int main()
////{
////        int a;
////        int b;
////        printf("Enter Two Number : \n");
////        scanf("%d%d", &a ,&b);
////        
////        
////        int *aptr = &a;
////        int *bptr = &b;
////        
////        printf("Sum of two number : %d\n", sum(aptr , bptr));
////        
////    
////
////        return 0;
////}
////        
////        int sum(int *x, int *y)
////
////        {
////                
////        int sum;
////        sum = *x + *y;
////        return sum;
////        }
//
//
//
//
//
////
////#include <stdio.h>
////int main()
////{
////        int score, sentinel = -1;
////        int max =0;
////        
////        printf("Enter a score (-1 to end):");
////        scanf("%d",&score);
////        
////        while(score != sentinel)
////        {
////                if (score > max)
////                        max = score ;
////                printf("\nEnter a score (-1 to end):");
////                scanf("\n%d", &score);
////                
////        }
////        
////        printf("Maximum score is %d\n", max);
////        return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////        float number, sentinel = 0;
////        float smallest=101.00;
////        printf("Enter a number (0  to end):");
////        scanf("%f", &number);
////        while (number != sentinel)
////        {
////                if (number < smallest)
////                        smallest=number;
////                printf("Enter a number (0 to end):");
////                scanf("%f", &number);
////        }
////        printf("smallest number is %f\n", smallest);
////        return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////        int number, sentinel = 0;
////        int smallest=101;
////        printf("Enter a number (0  to end):");
////        scanf("%d", &number);
////        while (number != sentinel)
////        {
////                if (number < smallest)
////                        smallest=number;
////                printf("Enter a number (0 to end):");
////                scanf("%d", &number);
////        }
////        printf("smallest number is %d\n", smallest);
////        return 0;
////}
//
//
//#include <stdio.h>
//#include <float.h>
//#define SIZE
////
////int main(){
////        
////        float smallest =100;
////        float a;
////        float b;
////        float c;
////      
////        
////        
////        printf("Enter Number:%f\n", smallest);
////        return 0;
////        
////        {
////        
////        if(smallest != 0);
////                smallest = a;
////        if(b < smallest )
////                smallest = b;
////        else if(c < smallest)
////                smallest = c;
////                        
////                
////        return smallest;
////        }
////        
////        
////}
////#include <stdio.h>
////
////int main()
////{
////        int column, row, sum;
////        
////        printf("+ | 0  1  2  3  4 \n");
////        printf("----------------\n");
////        
////        for (row=0; row<5; row++)
////        {
////                printf("%d |", row);
////        for (column= 0; column<5; column++)
////                {
////                        
////                        sum = row + column ;
////                        printf(" %d ", sum );
////                }
////                printf("\n");
////                
////                
////        }
////        
////
////        
////}
//
////
////#include <stdio.h>
////int main()
////{
////        int height, i, j;
////        int ch = 65;
////       
////        
////        printf("enter height:");
////        scanf("%d", &height);
////       
////        
////        
////        for ( i = 1; i<= height; i++) {
////                // 1 iteration for each row of the pyramid
////                
////                for ( j = 1; j<= 2*i-1; j++)
////                        printf(" ");
////                       
////                {
////                printf("%c", ch); // prints the sequence of stars
////                        ch++;
////                
////                }
////                printf("\n"); // prints a newline: the row is finished
////                
////        }
////}
//
////#include <stdio.h>
////int main()
////{
////        int height, i, j;
////        int num;
////        
////        
////
////        printf("Enter loop repeat number :");
//////        scanf("%d", &loop repeat number);
////        printf("enter a num:");
////        scanf("\n%d", &num);
////        
////        for ( i = 1; i <= 5; i++) {
////                // 1 iteration for each row of the pyramid
////                for ( j = 1; j <= num-i; j++)
////                        printf(" ");// prints the initial blanks
////                
////                for ( j = 1; j<= 2*i-1;j++)
////                        printf("%d",j);  // prints the sequence of stars
//////                        num--;
////                printf("\n");  // prints a newline: the row is finished
////        }
////        
////        return 0;
////}
//
//
////#include <stdio.h>
////#include <stdlib.h>
////int flip( );
////int main( void )
////{
////        
////        int flipcoin;
////        int head = 0;
////        int tail = 1;
////        
////        for ( flipcoin = 1; flipcoin <= 250; flipcoin++ ){
////                printf( "%d\n", flip( ));
////                
////                if (flip( ) ==0)
////                        head++;
////                else
////                        tail++;
////        }
////        printf( "heads was flipped %d times\n", head );
////        printf( "tails was flipped %d times\n", tail );
////        
////        return 0;
////        
////}    
////int flip( )
////{
////        int result = rand() % 2;
////        
////        if (result == 0)
////                return 0;
////        
////        else
////                return 1;
////        
////}
//
////
////#include <stdio.h>
////
////int main( void )
////
////
////{
////        int x;
////        int arr[10];
////        for (int x=0; int x<=10; int x++)
////        {
////               printf( "%d\n", int arr[]);
////        }
////        
////        return 0;
////        
////if (array[c] > largest)
////{
////        largest = arra[c];
////
//
////
////#include <stdio.h>
////        
////        int main()
////        {
////                int array[10], largest, size, c = 1;
////                
////                printf("Enter the number of elements in array\n");
////                scanf("%d", &size);
////                
////                printf("Enter %d integers\n", size);
////                
////                for (c = 0; c < size; c++)
////                        scanf("%d", &array[c]);
////                
////                largest = array[0];
////                
////                for (c = 1; c < size; c++)
////                {
////                        if (array[c] > largest)
////                        {
////                                largest = array[c];
////
////                        }
////                }
////                
////                printf("Largest element is %d.\n", largest);
////                return 0;
////        }
//
/////* Fibonacci Series c language */
////#include<stdio.h>
////
////int main()
////{
////        int n, first = 0, second = 1, next, c;
////        
////        printf("Enter the number of terms\n");
////        scanf("%d",&n);
////        
////        printf("First %d terms of Fibonacci series are :-\n",n);
////        
////        for ( c = 0 ; c < n ; c++ )
////        {
////                if ( c <= 1 )
////                        next = c;
////                else
////                {
////                        next = first + second;
////                        first = second;
////                        second = next;
////                }
////                printf("%d\n",next);
////        }
////        
////        return 0;
////}
//
////#include<stdio.h>
////unsigned long long int fibonacci (unsigned int count)
////{
////        int n1 =0,f;
////        int n2 = 1;
////        
////        for (Fibonacci count times)
////        {
////                
////        
////        
////        
////        }
////        
////}
//
////#include <stdio.h>
////int main()
////{
////        int height, i, j;
////        char symbol;
////        printf("enter height:");
////        scanf("%d", &height);
////        printf("enter a symbol:");
////        scanf("\n%c", &symbol);
////        
////        for ( i = 1; i <= height; i++) {
////                // 1 iteration for each row of the pyramid
////                for ( j = 1; j <= height - i; j++)
////                        printf(" ");    // prints the initial blanks
////                
////                for ( j = 1; j <= 2*i - 1; j++)
////                        printf("%c", symbol);  // prints the sequence of stars
////                
////                printf("\n");  // prints a newline: the row is finished
////        }
////}
////
//
////
////#include <stdio.h>
////
////int mail()
////{
////        largest(int array[]);
////        
////        MaxSoFar := a1;
////        for i := 10;
////        
////
////
////
////
////
////
////
////
////
////}
//
////
////
////#include <stdio.h>
////
////int main()                            /* Most important part of the program!  */
////{
////        int age;                          /* Need a variable... */
////        
////        printf( "Please enter your age" );  /* Asks for age */
////        scanf( "%d", &age );                 /* The input is put in age */
////        if ( age < 100 ) {                  /* If the age is less than 100 */
////                printf ("You are pretty young!\n" ); /* Just to show you it works... */
////        }
////        else if ( age == 100 ) {            /* I use else just to show an example */
////                printf( "You are old\n" );
////        }
////        else {
////                printf( "You are really old\n" );     /* Executed if no other statement is */
////        }
////        return 0;
////}
//
////
////#include <stdio.h>
////
////int main( )
////{
////        
////        int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
////        /* for loop to print value and address of each element of array*/
////        for ( int i = 0 ; i <= 6 ; i++ )
////        {
////                printf("val[%d]: value is %d and address is %u\n", i, val[i], &val[i]);
////        }
////        return 0;
////}
//
////#include <stdio.h>
////int main( )
////{
////        /*Pointer variable*/
////        int *p;
////
////        /*Array declaration*/
////        int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
////
////        /* Assigning the address of val[0] to pointer: 88820*/
////        p = &val[0];
////
////        for (int i = 0 ; i <= 6 ; i++)
////        {
////                printf("val[%d]: value is %d and address is %u\n", i,*p,p);
////                p++;
////        }
////        return 0;
////}
//
////int array[10], largest, size, c = 1;
////
////                printf("Enter the number of elements in array\n");
////                scanf("%d", &size);
////
////                printf("Enter %d integers\n", size);
////
////                for (c = 0; c < size; c++)
////                        scanf("%d", &array[c]);
////
////                largest = array[0];
////
////                for (c = 1; c < size; c++)
////                {
////                        if (array[c] > largest)
////                        {
////                                largest = array[c];
////
////                        }
////                }
////
////                printf("Largest element is %d.\n", largest);
////                return 0;
////        }
//
//
//// A small airline has just purchased a computer for its new automated reservations system. The president has asked you to program the new system. You’ll write a program to assign seats on each flight of the airline’s only plane (capacity: 10 seats).
//
////Your program should display the following menu of alternatives:
////Please type 1 for "first class"
////Please type 2 for "economy"
//
////If the person types 1, then your program should assign a seat in the first class section (seats 1– 5). If the person types 2, then your program should assign a seat in the economy section (seats 6– 10). Your program should then print a boarding pass indicating the person's seat number and whether it’s in the first class or economy section of the plane.
//
////Use a single-subscripted array to represent the seating chart of the plane. Initialize all the elements of the array to 0 to indicate that all seats are empty. As each seat is assigned, set the corresponding element of the array to 1 to indicate that the seat is no longer available.
////Your program should, of course, never assign a seat that has already been assigned. When the first class section is full, your program should ask the person if it’s acceptable to be placed in the economy section (and vice versa). If yes, then make the appropriate seat assignment. If no, then print the message "Next flight leaves in 3 hours."
//
//
//
//
//
////#include <stdio.h>
////int main( )
////{
////        int type,i,j,current;
////        
////        int totalSeat = 10;
////        int seatingChart[10];
////        for (i=0; i< totalSeat; i++) {
////                seatingChart[i] = 0;
////        }
////        
////        printf("Please type 1 for Firstclass & type 2 for Economyclass\n");
////        scanf("%d", &type);
////       
////        if(type == 1){
////                printf("First class passanger \n");
////                for(j=0; j<5; j++){
////                current = seatingChart[j];
////                        printf("%d Current seat status : " , &current);
////                                                if(current == 0){
////                                                        seatingChart(i) = 1;
////                                                        break;
////                                                }
////
////                }
////                for (int i=0; i<5; i++) {
////                        printf("First class passanger \n");
////                        int current = seatingChart[i];
////                        printf("%d Current seat status : " , &current);
////                        if(current == 0){
////                                seatingChart(i) = 1;
////                                break;
////                        } else {
////                          // first class is sold out
////                          // ask for them are you to seat in economy
////                          // do you have space economy
////                          // first check do you have space in economy
////                          // if its true give them seat in economy
////                          // if its false tell them there is another filigh after 3 hours
////                        }
////                }
//////           iterate through type1 and find available seat
//////           create another array to keep track of all the seats
////                
////        } else if(type == 2){
////                
////        } else {
////          // invalid entry - print with say enter either 1 or 2
////        }
////        // type 1 || type 2
////        
////        return 0;
//        //
//        
////        for (i =0; i<=10; i++){
////        
////        
////                if(i=0; i<=5; i++;)
////                {
////                 scanf("%d", &type1[5]);
////                printf("Firstclass seat is %d \n", &type1[i]);
////        }
////        
////                else if(i =6;i <=10; i++)
////        {
////                scanf("%d", &type2[5]);
////                printf("economyclass seat is %d \n", &type2[i]);
////        }
////        
////                else if{i=5;i>5; i++){
////        
////                        
////                printf("it’s acceptable to be placed in the economy section %d\n" &economyclass[5]);
////         }
////        else
////        {       printf("Next flight leaves in 3 hours\n");
////                }
////        }
////        return 0;
//}
//
////int sum(int a, int b)
////{
////        int c=a+b;
////        return c;
////}
////
////int main()
////{
////        int a =10;
////        int b = 20;
////        int x = sum(a,b);
////        printf("%d", x);
////        
////        return 0;
////}
//
//
////int increment(int var)
////{
////        var = var+7;
////        return var;
////}
////
////int main()
////{
////        int num1=20;
////        int num2 = increment(num1);
////        printf("num1 value is: %d\n", num1);
////        printf("num2 value is: %d", num2);
////        
////        return 0;
////}
//
////int increment(int *var)
////{
////        *var = *var+4;
////        return *var;
////}
////int main()
////{
////        int num1= 20;
////        int num2 = increment(&num1);
////        printf("num1 value is: %d\n", num1);
////        printf("num2 value is: %d", num2);
////        return 0;
////}
//
////#include <stdio.h>
//////disp(char ch);
////
////{
////        printf("%c ", ch);
////        
////        return ch;
////}
////
////
////
////int main()
////{
////        char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'I', 'j'};
////        for (int x=0; x<=10; x++)
////        {
////                /* I’m passing each element one by one using subscript*/
////                disp (arr[x]);
////        }
////        
////        return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////        int var =6;
////        while (var =5)
////        {
////                printf("%d", var);
////                var++;
////        }
////        return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////        int age;
////        printf("Input your age:");
////        scanf("%d",&age);
////        if(age >=18)
////{
////        printf("you can vote");
////}
////        else
////{
////        printf("you are not eligible for voting");
////}
////}
//
//#include<stdio.h>
//float calculateCharges (float);
//
//int main()
//{
//        int i;
//        float Charges;
//        float hours[3];
//       
//        float totalCharges;
//        float totalHours = hours[0]+hours[1]+hours[2];
//        totalCharges = (totalHours*Charges);
//        
//        scanf("%f %f %f", &hours[0], &hours[1], &hours[2]);
//        
//        printf("Car\tHours\tCharges\n");
//        
//        for (i = 0; i <3; i++)
//        {
//                printf("%d\t%.2f\t%.2f\n", i+1, hours[i], calculateCharges(hours[i]));
//                
////                printf("Total\t%.2f\t%.2f\n",&totalHours);
//                
//               
//        }
//         printf("\n");
//         printf("Total\t%.2f\t%.2f\n",&totalHours, &totalCharges);
//        
//        return 0;
//        
//}
//float calculateCharges(float hoursStayed)
//{
//        float charge;
//        
//        if(hoursStayed <= 3)
//        {
//                charge  = 3.00;
//                
//        }
//        else if(hoursStayed > 3)
//        {
//                charge  = (3 + (0.75* (hoursStayed-3)));
//                
//        }
//        else if(hoursStayed > 24)
//        {
//                charge = 15.0;
//        }
//        return charge;
//}
//
//
////        printf("How many hours did each car stay?\n");
////        scanf("%f\n%f\n%f\n", &time1, &time2, &time3);
////
////        charge = calculateCharges();
////        totalHours = time1 + time2 + time3;
////        totalCharges = (time1 * charge);
////        
////        
////        printf("\n");
////        printf("Car\tHours\t\tCharge\n");
////        printf("1\t%f\t%f\n");
////        printf("2\t%f\t%f\n");
////        printf("3\t%f\t%f\n");
////        printf("TOTAL\t%f\t%f\n", &totalHours, &totalCharges);
////        
////        system("PAUSE");    
////        return 0;
////
////
////
////
////}
////
//#include <stdio.h>
//int qualitypoints(int average);
//
//int main()
//{
//        int average,i;
//        
//        printf("Enter student average: ");
//        for(i=1; i<=100; i++)
//        {
//                scanf("%d",&average);
//                printf("Student Grade is: %d\n",qualitypoints(average));
//        }
//        return 0;
//}
//int qualitypoints(int average)
//{
//        if(average >=100)
//        {
//                return 4;
//        }
//        else if(average>90)
//        {
//                return 3;
//        }
//        else if(average>80)
//        {
//                  return 2;
//        }
//        else if(average>70)
//        {
//                return 1;
//        }
//        else if(average>60)
//        {
//                return 0;
//        }
//        else return 0;
//}
//
//
//#include <stdio.h>
//int qualityPoints(int average);
//
//int main(void) {
//        
//        int average,i;
//        
//        printf("Enter 5 student average: ");
//        
//        for(i=1;i<=5;i++){
//                
//                scanf("%d",&average);
//                printf("Student Grade is: %d\n",qualityPoints(average));
//        }
//        
//        return 0;
//}
//
//int qualityPoints(int average){
//        
//        if (average>=90)
//                return 4;
//        
//        else if (average>80)
//                return 3;
//        
//        else if (average>70)
//                return 2;		
//        
//        else if (average>60)
//                return 1;
//        
//        else return 0;
//
//
//
//
