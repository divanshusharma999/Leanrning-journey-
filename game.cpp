
//guess the code game . enter your number guess , 
//if it matches the code you win , if not you have 3 attempts to guess the code .
// if you fail you can retry or exit the game. 
//you get hints if your guess is higher or lower than the code.
// the code is between 1 and 20


#include <iostream>

using namespace std;
int main () {
    int code = 12;
    int userCode;
     int number = 0;
    int attempts = 3;
 
  
   
while (number == 0 ){
    attempts = 3;
        cout << "enter code : " << endl ; 
      cin >> userCode ;
    while (userCode != code && attempts > 1) {
        attempts--;
       if (userCode < code) {
            cout << "code is higher" << endl ;
        } else {
            cout << "code is lower" << endl ;
        }
        cout << "enter code : " << endl ;  
        cin >> userCode ;
    }
    if (userCode == code) {
        cout << "code is correct" << endl ;
        return 0 ;
    } else {
        cout << "you have no attempts left" << endl ;
       
        cout << "enter number 0 to retry or any other number to exit : " << endl ;
        cin >> number ;

        if( number !=0 ){
            break ;
        }

        }
   } }