#include <iostream>
using namespace std;
int main(){
    cout << "enter a number" << "\n";
    int number1 = 0;
    cin >> number1;

    if(number1 > 0){
        if(number1 % 3 == 0 && number1 % 5 == 0){
            cout << number1 / 3 << "\n";
            cout << number1 /5 << "\n";
        }
        else{
            cout << number1 % 3 << "\n";
            cout << number1 % 5 << "\n";
        }
    }
    else{
        cout << "not" << "\n";
    }
}