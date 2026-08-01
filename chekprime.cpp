// chek prime 
#include <iostream>
using namespace std;
    int main() {
    int number ;
    cout << " enter number : " << endl ;
    
    cin >> number ;
    
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            cout << "not prime" << endl ;
            return 0 ;
        }
    }
    cout << "prime" << endl ;
    return 0 ;
}