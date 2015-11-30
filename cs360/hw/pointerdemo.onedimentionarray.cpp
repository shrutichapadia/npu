// pointerDemo8_prog.cpp : Defines the entry point for the
// console one dim array application with pointer dereferencing.
#include <iostream>
#include <array>
#include <string>
using namespace std; // no need to specify std:: before cout
static const size_t numStudents = 48;
void beginScores (string cName)
{
cout << "\n\t The class ''" << cName;
cout << "'' \n\t scores will be processed." << endl;
return;
}
// function gets minimum of the scores
int getMinScore(array <int, numStudents> Scores)
{
int minScore = 999;
//loop through the scores array using range based for loop
for (int grade : Scores)
{
if (grade < minScore)
minScore = grade; //latest minScore
}
return minScore;
}
// function gets maximum of the scores
int getMaxScore(array <int, numStudents> Scores)
{
int maxScore = 0;
int scoreCount = 0;
// loop through the scores array using c type for loop
// and dereferencing the array element by subscript
for (scoreCount = 0; scoreCount < numStudents; scoreCount++)
{
if (Scores [scoreCount] > maxScore)
maxScore = Scores [scoreCount]; //latest maxScore
}
return maxScore;
}
// function gets the average of the scores
double getAVgScore(array <int, numStudents> Scores)
{
int sumScores = 0;
int scoreCount = 0;
int * scorePtr;
// loop through the scores array using c type for loop
// and pointer dereferencing to access the element
for (scorePtr = &Scores[0], scoreCount = 0;
scoreCount < numStudents; scoreCount++, scorePtr++)
{
sumScores += *scorePtr; //so far sumScore
}
return static_cast <double> (sumScores / numStudents);
}
// function processes the scores calls getMaxScores, getMinScores and getAvgScores
void processScores(string cName, array <int, numStudents> Scores)
{
int * scorePtr;
int scoreCount;
// int stCount = 15;
cout << "\n\t The statistics for the course: ''" << cName << "''";
cout << "\n\t ****************************** " << endl << endl;
cout << "\n\t The scores are: ";
cout << "\n\t *************** " << endl;
cout << "\n\t ";
//loop through the scores array using c style for loop
// and pointer dereferencing
for (scorePtr = &Scores[0], scoreCount = 0;
scoreCount < numStudents; scoreCount++, scorePtr++)
{
cout << *scorePtr;
if ((scoreCount + 1) % 12 == 0)
{
cout << "\n\t ";
continue;
}
cout << ", ";
}
cout << endl;
//print statistics for the course
cout << "\n\t The maximum score is: " << getMaxScore(Scores) << endl;
cout << "\n\t The minimum score is: " << getMinScore(Scores) << endl;
cout << "\n\t The Average score is: " << getAVgScore(Scores) << endl;
cout << "\n\t End of statistics for the course " << endl;
cout << "\t ******************************** " << endl << endl;
return;
}
int main()
{
string courseName = "Object Oriented Programming in C++";
// students scores array
const array <int, numStudents> stScores =
{ 89, 91, 72, 94, 69, 77, 85, 82, 96, 81, 79, 92, 58, 83,
75, 78, 86, 91, 96, 85, 71, 68, 70, 74, 76, 93, 84, 87,
73, 90, 80, 88, 97, 75, 84, 73, 82, 91, 95, 87, 77, 84,
91, 88, 69, 70, 92, 86};
char response;
processScores(courseName, stScores);
cout << "\n\n\t Please enter 'Q' or 'q' to quit: " << endl;
cin >> response;
return 0;
}
