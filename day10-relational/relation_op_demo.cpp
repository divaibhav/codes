/*
Relational operator demo
*/
#include <iostream>
using namespace std;
int main(){
    bool is_active = false;
    bool is_online = 15;

    cout << " is active = " << is_active << "\n";
    cout << " is online = " << is_online << "\n";
    int num1 = 10;
    int num2 = 15;
    int num3 = 8;

     

    bool num1_is_greater_than_num2 = num1 > num2;
    bool num1_is_greater_than_num3 = num1 > num3;
    bool num1_is_greater_than_both = 
        num1 > num2 && num1 > num3;

    cout << "num1_is_greater_than_num2 = "
        << num1_is_greater_than_num2 << "\n";

    cout << "num1_is_greater_than_num3 = "
        << num1_is_greater_than_num3 << "\n";

    cout << "num1_is_greater_than_both = "
        << num1_is_greater_than_both << "\n";

}