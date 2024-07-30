#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cout << "Enter an integer" << "\n";
    cin >> number;

    int temp = number; 
    int new_number = 0;

    while(number > 0){
        int digit = number % 10;
        number = number / 10;
        new_number = new_number * 10  + digit;
    }
    number = temp;
    cout << "number = " << number << "\n";
    cout << "new number = " << new_number << "\n"; 

}