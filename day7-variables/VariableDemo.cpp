#include <iostream>
using namespace std;
int main()
{
    /*
    WAP to declare, initialize and print all the five different types of variables.
    Using all the five different data types    
    */
    // declare a variable
    // datatype identifier;
    int number;
    float temprature;
    double totalBill;
    char section;
    bool isActive;
    //initialize the declared variables
    // variables are initialized by corresponsing literal values
    // identifier = value;
    number = 548;
    temprature = 30.25;
    totalBill = 5.2502;
    section = 'A';
    // boolean literals are true / false
    isActive = true;

    // print all the variables
    // to print we use cout statement
    cout << "The value inside the variable number = " << number << "\n";
    cout << "Temprature = " << temprature << endl;
    cout << "Total Bill = " << totalBill << "\n";
    cout << "Section = " << section << "\n";
    cout << "Is Active = " << isActive << "\n";

    return 0;
    
}
