// checking wheather the given number is even or odd;
#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cout << "enter an integer number \n";
    cin >> number;
    // checking for even or odd
    if( number % 2 == 0){
        cout << "Number = " << number << " is even number\n" ; 
    }
    else{
        cout << "Number = " << number << " is odd number\n";
    }
    return 0;
}