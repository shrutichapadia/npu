//
//  Guess the Numbers.c
//  labwk3
//
//  Created by Temp on 7/16/15.
//  Copyright (c) 2015 shruti. All rights reserved.
//

//#include "Guess the Numbers.h"
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game(void);
//
//int main(void) {
//    
//    srand(time(NULL));
//    game();
//    
//    return 0;
//    
//}
//
//void game(void){
//    
//  
//    char choice='y';
//    
//    while(choice!='n'){
//        
//        int number, guess, guessCount=0;
//        
//        number=1+rand()%999;
//        
//        printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.");
//        scanf("%d",&guess);
//        guessCount++;
//        
//        
//        while(guess!=number){
//            
//            if(guess<number){
//                
//                guessCount++;
//                printf("Too low. Try again.");
//                scanf("%d",&guess);
//                
//            }
//            
//            else {
//                
//                guessCount++;
//                
//                printf("Too high. Try again.");
//                scanf("%d",&guess);
//                
//            }
//        }
//        
//        if(guess==number){
//            
//            guessCount++;
//            
//            if (guessCount==10)
//                printf("Ahah! You know the secret!");
//            else if (guessCount<10)
//                printf("Either you know the secret or you got lucky!");
//            else
//                printf("You should be able to do better!");
//            
//            printf("Excellent! You guessed the number in %d tries!\nWould you like to play again (y or n)?",guessCount );
//            scanf(" %c",&choice); //Be careful about stdin. There must be one space before %c to clean it.
//            
//            if (choice=='y')
//                printf("Hmm you wanna play again. okay.\n");	
//            else
//                exit(1);
//            
//        }
//        
//    }
//    
//}


//#include "Guess the Numbers.h"
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void GuessNumberGame(void);
//
//int main(void) {
//
//    srand(time(NULL));
//    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.");
//    GuessNumberGame();
//
//    return 0;
//
//}
//
//void GuessNumberGame(void){
//
//
//    char choice='y';
//
//    while(choice!='n'){
//
//        int number, guess, guessCount=0;
//
//        number=1+rand()%1000;
//        
//        scanf("%d",&guess);
//        guessCount++;
//
//
//        while(guess!=number){
//
//            if(guess<number){
//
//                guessCount++;
//                printf("Too low. Try again.\n");
//                scanf("%d",&guess);
//
//            }
//
//            else {
//
//                guessCount++;
//                printf("Too high. Try again.\n");
//                scanf("%d",&guess);
//
//            }
//            
//            if (guessCount==10)
//                
//                guessCount++;
//            
//            if(guess==555){
//                printf("Excellent! You guessed the number\nWould you like to play again (y or n)?");
//                scanf(" %c",&choice);
//                if (choice=='y')
//                    printf("Great you wanna play again. okay.\n");
//                else
//                    exit(1);
//            }
//            
//        }
//
//    }
//
//}