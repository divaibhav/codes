#include <iostream>
using namespace std;
int main(){
    // prompt user to enter DOB in format DDMMYYYY
    // read and store DOB
    // declare and initialize sum
    // usewhile to calculate sum
    // check if sum is single digit, if yes print
    // otherwise, calculate sum again
    cout << "Enter your DOB in format DDMMYYYY" << "\n";
    int dob = 0;
    cin >> dob;
    if(dob > 999999 && dob < 100000000){
    cout << "dob - " << dob;

    int sum = 0;

    while(dob !=0){
        int digit = dob % 10;
        cout << "digit = " << digit << "\n";
        sum = sum + digit;
        dob = dob / 10;
    }
    
    if(sum > 9){
        int sum2 = 0;
        while(sum != 0){
            int digit = sum % 10;
            
            sum2 = sum2 + digit;
            sum  = sum / 10;
        }
        cout << "Mulank = " << sum2 << "\n";
    }
    else{
        cout << "Mulank = " << sum << "\n";

    }
    }
    else{
        cout << "Invalid input" << "\n";
    }
}