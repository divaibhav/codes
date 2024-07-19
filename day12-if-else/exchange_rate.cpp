/*
Write a program that prompts the user to enter the exchange rate 
from currency in U.S. dollars to Indian Rupee. 
Prompt the user to enter 0 to convert from U.S. dollars to
 Indian Rupee and 1 to convert from Indian Rupee and U.S. dollars. 
 Prompt the user to enter the amount in U.S. dollars or 
 Indian Rupee to convert it to Indian Rupee or U.S. dollars, 
 respectively. Here are the sample runs:
*/
#include <iostream>
using namespace std;
int main(){
    cout << "enter the exchange rate from US dollar to INR" << "\n" ;
    float exchange_rate = 0;
    cin >> exchange_rate;
    cout << "enter 0 to convert US dollar to INR\n" << "enter 1 to convert INR to US dollar\n" ;
    int choice = 0;
    cin >> choice;
    if(choice == 0 || choice == 1){
        cout << "Enter the amount to convert\n";
            float amount_in_dollar = 0;
            cin >> amount_in_dollar;
        if(choice == 0){
        
            float converted_amount = amount_in_dollar * exchange_rate;
            cout << "converted amount = " << converted_amount;

        }      else if(choice==1){
        
            float converted_amount = amount_in_dollar / exchange_rate;
            cout << "converted_amount=" <<converted_amount;
    
        }
    }
    else {
        cout <<"Invalid input\n";
    }
    return 0;
}