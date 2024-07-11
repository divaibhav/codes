#include <iostream>
using namespace std;
int main(){
    int length = 0;
    int breadth = 0;
    cout << "enter the length of rectangle";
    cin >> length;
    cout << "enter the breadth of rectangle";
    cin >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    cout << "Area = " << area << "\n";
    cout << "Perimeter = " << perimeter << "\n";
    return 0;
}