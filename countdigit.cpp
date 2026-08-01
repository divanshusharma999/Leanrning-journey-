// count digits in a number
#include <iostream>
using namespace std;

int main() {

    int number ;
int count = 0 ;
    cout << " enter number : " << endl ;
    cin >> number ;

    while (number != 0) {
number = number / 10;
        count++ ;
    }
    cout << "number of digits: " << count << endl ;
    return 0 ;
}