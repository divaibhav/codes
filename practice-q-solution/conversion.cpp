#include <iostream>
using namespace std;
int main(){
    double celcius = 0.0;
    cout << "enter the temprature value in degree celcius" << "\n";
    cin >> celcius;
    double fahrenheit = (9.0 / 5) * celcius + 32;
    cout << "fahrenheit  = " << fahrenheit << "\n" ;
    return 0;
}