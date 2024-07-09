#include <iostream>
using namespace std;

int main(){
    cout << "Enter an integer length";
    int length = 0;
    cin >> length;
    cout << "enter an integer breadth";
    int breadth = 0;
    cin >> breadth;
    int area = length * breadth;
    int perimeter = (length + breadth) * 2;
    cout << "Area = " << area << "\n";
    cout << "Perimeter = " << perimeter << "\n";
    return 0;

}