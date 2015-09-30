// Batsman Score per Inning ,Average, Minimum and Maximum
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string BatsmanName;
   int score = 30;
   int score1stInning = 0;
   int score2ndInning = 0;
   int score3rdInning = 0;
   int score4thInning = 0;
   int score5thInning = 0;
   int score6thInning = 0;
   int score7thInning = 0;
   float scoreAverage = 0.0;

// name string to enter player name
   cout << "Please Enter BatsmanName:" << endl;
   cin >> BatsmanName;
//   cout << endl;
// loop for innings score @ every inning score increase by 20 runs and its average
    while (score != 0)
    {
      cout << "score1stInning:" << endl;
      cin >> score1stInning;
      // score1stInning = score;
      // cout << score << endl;
      cout << "score2ndInning:" << endl;
      score2ndInning = score + 20;
      cout << score2ndInning << endl;
      cout << "score3rdInning" << endl;
      score3rdInning = score2ndInning +20;
      cout << score3rdInning << endl;
      cout << "score4thInning" << endl;
      score4thInning = score3rdInning +20;
      cout << score4thInning << endl;
      cout << "score5thInning" << endl;
      score5thInning = score4thInning +20;
      cout << score5thInning << endl;
      cout << "score6thInning" << endl;
      score6thInning = score5thInning +20;
      cout << score6thInning << endl;
      cout << "score7thInning" << endl;
      score7thInning = score6thInning +20;
      cout << score7thInning << endl;
      cout << "scoreAverage:" << endl;
      scoreAverage = (score1stInning + score2ndInning + score3rdInning + score4thInning +score5thInning + score6thInning + score7thInning)/2;
      cout << scoreAverage << endl;

      return 0;

    }




   return 0;
}
