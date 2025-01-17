#include<iostream>
using namespace std;

int main() {
    int marks;
    char grade;

    cout << "Enter your Marks : ";
    cin >> marks;

    // Check for invalid input
    if (marks < 0 || marks > 100) {
        cout << "Please Enter Correct Marks." << endl;
        return 0; 
    }

    grade = marks < 40 ? 'F' :  
            marks < 65 ? 'D' :
            marks < 85 ? 'C' :
            marks < 95 ? 'B' : 'A';

    cout << "Your Grade is " << grade << ". ";

    switch(grade) {
        case 'A':
            cout << "Excellent Work! ";
            break;

        case 'B':
            cout << "Well done! ";
            break;

        case 'C':
            cout << "Good job, ";
            break;

        case 'D':
            cout << "You Passes, but you could do better ";
            break;

        case 'F':
            cout << "Sorry, you Failed, ";
            break;

        default:
            cout << "Error, ";
            break;
    }

    if (marks < 40) {
        cout << "you are not Eligible for Next Level." << endl;
    } else {
        cout << "Congratulations you are Eligible for Next Level." << endl;
    }

    return 0;
}
