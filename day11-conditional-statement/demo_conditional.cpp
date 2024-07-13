#include <iostream>
using namespace std;
int main(){
    //asking the user
    // to enter the bill_amount,
    // if bill_amount is greater than
    // 1000, the print discount of 10%
    int bill_amount = 0;
    // prompt
    cout << "Enter the bill amount" << "\n";
    cin >> bill_amount;
    // conditional check
    if(bill_amount > 1000){
        cout << "discount of 10%" << "\n";
    }
    cout << "Tysm" << "\n"; 
}