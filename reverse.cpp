#include <iostream>
using namespace std;
 

int main() {
    int number ;
    cout << " enter number : " << endl ;
    cin >> number ;
int reversed_number = 0;
    
while ( number != 0) {
    reversed_number = reversed_number * 10 + number % 10;
    number = number / 10;
   
}

cout << "reversed number: " << reversed_number << endl;
return 0 ;
}

    
