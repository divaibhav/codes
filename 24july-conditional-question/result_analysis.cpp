/*
Analyze the result of students.
Accept marks of 5 subject from user.
calculate total and percent, print them
on output.

Also check in how many subjects 
student scored 60% and above marks.
*/
#include <iostream>
using namespace std;
int main(){
    
    cout << "Enter marks of maths" << "\n";
    int math_marks = 0;
    cin >> math_marks;

    cout << "Enter marks of english" << "\n";
    int english_marks = 0;
    cin >> english_marks;

    cout << "Enter marks of hindi" << "\n";
    int hindi_marks = 0;
    cin >> hindi_marks;

    cout << "Enter marks of computer" << "\n";
    int computer_marks = 0;
    cin >> computer_marks;

    cout << "Enter marks of science" << "\n";
    int science_marks = 0;
    cin >> science_marks;

    int total_marks = math_marks + english_marks +
                        hindi_marks + computer_marks
                        + science_marks;
    float percentage = total_marks / 5.0;

    cout << "Total Marks = " << total_marks << "\n";
    cout << "Percentage = " << percentage << "\n";

    // In how many subjects student scored 60% or more
    int count = 0; // counter to count the number of subjects, in which student scored 60% or more
    int min_percentage = 60;
       // count++ ;
       // count = count + 1;
    if(math_marks >= min_percentage){
        count++;
    }
    if(english_marks >= min_percentage){
        count++;
    }
    if(hindi_marks >= min_percentage){
        count++;
    }
    if(computer_marks >= min_percentage){
        count++;
    }
    if(science_marks >= min_percentage){
        count++;
    }

    cout << "No of subjects in which scored 60 or more"
        << " = " << count << "\n";

    return 0;

}