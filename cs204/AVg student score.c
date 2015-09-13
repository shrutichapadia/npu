//
//  AVg student score.c
//  labwk3
//
//  Created by Temp on 8/21/15.
//  Copyright (c) 2015 shruti. All rights reserved.
//


//#include "file input output.h"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int sid;
//    char name[80];
//    char filename[80];
//    int score;
//    int maxscore=0;
//    FILE *fp1=fopen("/Users/temp/testit.txt", "r");
//    FILE *fp2;
//    
//    if (fp1 == NULL)
//    {
//        printf("/Users/temp/testit.txt can not be found\n");
//        exit(1);
//    }
//    
//    printf("From /Users/temp/testit.txt:\n");
//    while (!feof(fp1))
//    {
//        fscanf(fp1,"%d%s%d", &sid, name, &score);
//        printf("%d	%s	%d\n", sid, name, score);
//        if (score > maxscore)
//            maxscore=score;
//    }
//    printf("maxscore=%d\n", maxscore);
//    printf("Enter a file name:");
//    scanf("%s",filename);
//    fp2=fopen(filename,"w");
//    printf("Enter sid, name, and score <CTL-Z to end of input>\n");
//    while (scanf("%d%s%d", &sid, name, &score) !=EOF)
//    {
//        fprintf(fp2, "%d	%s	%d\n", sid, name, score);
//    }
//    fclose(fp2);
//    
//    fp2=fopen(filename,"r");
//    if (fp1 == NULL)
//    {
//        printf("Users/temp/Documents/testout.txt can not be found\n");
//        exit(1);
//    }
//    printf("\n From %s:\n", filename);
//    fscanf(fp2,"%d%s%d", &sid, name, &score);
//    while (!feof(fp2))
//    {
//        printf("%d	%s	%d\n", sid, name, score);
//        fscanf(fp2,"%d%s%d", &sid, name, &score);
//    }
//    fclose(fp1);
//    fclose(fp2);
//    
//    return 0;
//
//}