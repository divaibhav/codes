#include <iostream>
using namespace std;
int main(){
   
    int sum = 0;
    int number = 0;
    while(sum <= 1000){
        cout << "enter a number" << "\n";
        
        cin >> number;
        sum = sum + number;
    }

    cout << "Sum = " << sum;
}