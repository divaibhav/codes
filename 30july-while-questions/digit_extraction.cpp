#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cout << "Enter an integer" << "\n";
    cin >> number;

    while (number != 0){
        int digit = number % 10;
        number = number / 10;
        if(number > 0)
            cout << digit << ", ";
        else
            cout << digit;
    }
    cout << "\n";
    return 0;
}
    