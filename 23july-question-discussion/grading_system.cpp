#include <iostream>
using namespace std;
int main(){
    cout << "enter marks of maths" << "\n";
    float math_marks = 0;
    cin >> math_marks;
    
    cout << "enter marks of english" << "\n";
    float english_marks = 0;
    cin >> english_marks;
    
    cout << "enter marks of hindi" << "\n";
    float hindi_marks = 0;
    cin >> hindi_marks;

    cout << "enter marks of computer" << "\n";
    float computer_marks = 0;
    cin >> computer_marks;

    cout << "enter marks of science" << "\n";
    float science_marks = 0;
    cin >> science_marks;
    int passing_marks = 35;
    int fail_count = 0;

    if(math_marks < passing_marks){
        fail_count++;
    }
    if(english_marks < passing_marks){
        fail_count++;
    }
    if(hindi_marks < passing_marks){
        fail_count++;
    }
    if(computer_marks < passing_marks){
        fail_count++;
    }
    if(science_marks < passing_marks){
        fail_count++;
    }

    int min_failed = 2;

    if(fail_count < min_failed){
         // complete grade calculation logic
        float percent = (math_marks + english_marks + hindi_marks
                        + computer_marks + science_marks) / 5.0;
        if(percent >= 91 && percent <= 100){
            cout << "Grade A+" << "\n";
        }
        else if(percent >= 81){
            cout << "Grade A" << "\n";
        }
        else if(percent >= 71){
            cout << "Grade B+" << "\n";
        }
        else if(percent >= 61){
            cout << "Grade B" << "\n";
        }
        else if( percent >= 51){
            cout << "Grade C" << "\n";           
        }
        else if(percent >= 41){
            cout << "Grade D" << "\n"; 
        }
        else{
            
        }
    }
    else{
        cout << "Grade not Calculate" << "\n";
    }
}