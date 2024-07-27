#include <iostream>
using namespace std;
int main(){
    char user_input = 0;
    do{
        cout << "Do you want to continue, press Y or n" << "\n";
        cin >> user_input;
    } 
    while(user_input == 'Y' || user_input == 'y');
}