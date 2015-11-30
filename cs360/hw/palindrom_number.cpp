// palindrome check

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num; int i;
    int temp; int rev =0;
    cout << "Enter a integer number to check as number is palindrome or not:\n ";
    cin >> num;

    for(temp=num;num!=0;num=num/10){
         i=num%10;
         rev=rev*10+i;
    }

    if(temp==rev)
         cout << temp << " : this is a palindrome numbers" << endl;
    else
         cout << " : this is not a palindrome numbers" << endl;

    return 0;
}
