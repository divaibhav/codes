#include <iostream>
using namespace std;
int main(){
    // step 1 user se amount mangna
    // 1.1 prompt the user
    cout << "enter the withdrawal amount" << "\n";
    // 1.2 create storage space for input value
    int withdraw_amount = 0;
    // 1.3 read the input
    cin >> withdraw_amount;
    float khate_ka_balance = 5000;
    bool flag = false;

    if(withdraw_amount <= khate_ka_balance){
        cout << "Rs." << withdraw_amount 
            << " is withdrawn from your account" << "\n";
            flag = true;
    }
    if(!flag){
        cout << "pata nahi kya ho raha hai" << "\n";
    }
    
}