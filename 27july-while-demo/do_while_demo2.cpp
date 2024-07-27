/*
perform multiplication by 5 
till the time user given number is even
*/
#include <iostream>
using namespace std;
int main(){
    int number = 0;
    do{
        cout << "enter an even number for mullitiplication by 5"
             << "\n";
        cin >> number;
        cout << "Result = " << number * 5 <<"\n";
    }while(number % 2 == 0);
}