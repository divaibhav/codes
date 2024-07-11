#include <iostream>
using namespace std;
int main(){
    int radius = 0;
    cout << "enter radius of circle" << "\n";
    cin >> radius; //5
    float area = 3.14 * radius * radius;
    float perimeter = 2 * 3.14 * radius;

    cout << "Area of circle with radius = "
            << radius << " is = " << area << "\n";
    cout << "Perimeter of circle with radius = " << radius
            << " is = " << perimeter <<"\n";
    return 0;

    // Area of circle with radius = 5 is = 78.5
}