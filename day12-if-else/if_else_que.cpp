//wap to accept two numbers.
// identify which is greater and 
// which is smaller;
#include <iostream>
using namespace std;
int main(){
    int number1 = 0;
    int number2 = 0;
    cout << "enter an integer number \n";
    cin >> number1;
    cout << "enter an integer number \n";
    cin >> number2;
    if(number1 > number2){
        cout << "Number 1 = " << number1
        << "is greater\n";
        cout << "Number 2 = " << number2
        << "is samller\n";
    }
    else{
        cout << "Number 2 = " << number2
        << "is greater\n";
        cout << "Number 1 = " << number1
        << "is samller\n";
    }
    return 0 ;
}