// loops
/*
    1. do .. while loop
    2. while loop
    3. for loop


    do while syntax
    
    do {
    
    //statements;
    } while (condition) ;
*/
#include <iostream>
using namespace std;
int main(){
   char user_choice = 0;
   do{
    cout << "Do you want to continue, press  Y Otherwise n" << "\n";
    
    cin >> user_choice;
   } while(user_choice == 'Y');

   return 0;
}