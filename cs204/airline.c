//
//  airline.c
//  labwk3

// A small airline has just purchased a computer for its new automated reservations system. The president has asked you to program the new system. You’ll write a program to assign seats on each flight of the airline’s only plane (capacity: 10 seats).

//Your program should display the following menu of alternatives:
//Please type 1 for "first class"
//Please type 2 for "economy"

//If the person types 1, then your program should assign a seat in the first class section (seats 1– 5). If the person types 2, then your program should assign a seat in the economy section (seats 6– 10). Your program should then print a boarding pass indicating the person's seat number and whether it’s in the first class or economy section of the plane.

//Use a single-subscripted array to represent the seating chart of the plane. Initialize all the elements of the array to 0 to indicate that all seats are empty. As each seat is assigned, set the corresponding element of the array to 1 to indicate that the seat is no longer available.
//Your program should, of course, never assign a seat that has already been assigned. When the first class section is full, your program should ask the person if it’s acceptable to be placed in the economy section (and vice versa). If yes, then make the appropriate seat assignment. If no, then print the message "Next flight leaves in 3 hours."
//
//  Created by Temp on 7/9/15.
//  Copyright (c) 2015 shruti. All rights reserved.
//
//
//#include "airline.h"
//#include <stdio.h>
//
//
//
//int main( )
//{
//    int type,i,j,k,current;
//    int totalSeat = 10;
//    int seatingChart[10];
//    int seatAssignedE = 0;
//    int seatAssignedF = 0;
//
//    for (i=0; i< totalSeat; i++) {
//        seatingChart[i] = 0;
//    }
//    
//    for(k = 0; k< totalSeat; k++){
//        printf("Availble Seat[%d] = %d\n" , k, seatingChart[k]);
//    }
//
//    
//    while(seatAssignedE + seatAssignedF < totalSeat){
//        printf("Please type 1 for Firstclass & type 2 for Economyclass\n");
//        scanf("%d", &type);
//        for(j=0; j<totalSeat; j++){
//
//            current = seatingChart[j];
//            if(current == 1){
//
//                continue;
//            }
//            if(j <= 4 && type == 1){
//               printf("I am first class and 4 and 1 \n");
//               seatingChart[j] = 1;
//               seatAssignedF++;
//               break;
//            }
//            if(seatAssignedF == 5 && j > 4 && type == 1){
//                printf("First class is full give me economy PLEASE - to confirm press 2  \n");
//                break;
//            }
//            if(j > 4 && type == 2){
//                printf("I am economy class and 5 and 2 \n");
//                seatingChart[j] = 1;
//                seatAssignedE++;
//                break;
//            }
//            if(seatAssignedE == 5 && j <= 4 && type == 2){
//                printf("Economy class is full give me first class PLEASE - to confirm press 1  \n");
//                break;
//            }
//			if(seatAssignedE ==5 && seatAssignedF ==5 && type ==1 && type ==2){
//				printf("this Flight is full & Next flight leaves in 3 hours");
//				break;
//			}
//			
//        }
//		
//
//        for(k = 0; k <totalSeat; k++){
//            printf("Seat[%d] = %d\n" , k, seatingChart[k]);
//			
//        }
//		
//    }
//    
//    
//return 0;
//    
//}


