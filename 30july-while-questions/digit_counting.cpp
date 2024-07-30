#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cout << "Enter an integer" << "\n";
    cin >> number;

    int digit_count = 0;

    while(number > 0){
        number = number / 10;
        digit_count++;
    }

    cout << "no of digits = " << digit_count << "\n";
}