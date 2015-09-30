// Batsman Score per Inning ,Average, Minimum and Maximum
#include <iostream>
#include <string>
using namespace std;

int main(){


   int score1stInning = 0;
   int score2ndInning = 0;
   int score3rdInning = 0;
   int score4thInning = 0;
   int score5thInning = 0;
   int score6thInning = 0;
   int score7thInning = 0;
   float scoreAverage = 0.0;
   int min = 999;
   int max = 0;
   int incrementer = 20;
   int inningscore;
   string BatsmanName;

   // name string to enter player name
   cout << "Please Enter BatsmanName:" << endl;
   cin >> BatsmanName;

   cout << "Enter First Inning score : " << endl;
   cin >> score1stInning;
   cout << "First Inning Score    : " << score1stInning << endl;

    score2ndInning = score1stInning + incrementer;
    cout << "Second Inning Score   : " << score2ndInning << endl;

    score3rdInning = score2ndInning + incrementer;
    cout << "Third Inning Score    : " << score3rdInning << endl;

    score4thInning = score3rdInning + incrementer;
    cout << "Fourth Inning Score   : " << score4thInning << endl;

    score5thInning = score4thInning + incrementer;
    cout << "Fifth Inning Score    : " << score5thInning << endl;

    score6thInning = score5thInning + incrementer;
    cout << "Sixth Inning Score    : " << score6thInning << endl;

    score7thInning = score6thInning + incrementer;
    cout << "Seventh Inning Score  : " << score7thInning << endl;

    int scores[7] = {score1stInning , score2ndInning , score3rdInning , score4thInning ,score5thInning , score6thInning , score7thInning};

    int totalScore = 0;
    for(int i=0;i<7;i++){
      totalScore += scores[i];
    }
    cout << "Total Score   : " << totalScore << endl;
    //score average,minimm,and maximum declaration
    scoreAverage = totalScore / 7;
    cout << "Average Score : " << scoreAverage << endl;

    for(int j=0;j<7;j++){
      if(scores[j] > max){
          max = scores[j];
          //cout << "Max : " << max << endl;
      }
      if(scores[j]<min){
          min = scores[j];
      }
    }

    cout << "Maximum Score : " <<  max << endl;
    cout << "Minimum Score : " <<  min << endl;
    return 0;
}
