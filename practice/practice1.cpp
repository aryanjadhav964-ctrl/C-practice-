#include <iostream>
using namespace std;

int main() {
    //if statement
    // int age;
    // int marks;


    //if statement example


    // if (age >= 18) {
    //     cout << "You can Vote" << endl;
    // } 



    //if else example


    // cout << "Enter  your marks : ";
    // cin >> marks;
    // if (marks >= 35) {
    //     cout << "Pass";
    // } else {
    //     cout << "Fail";
    // }


    //else if example or if else ladder example


    // int marks = 85;
    // if (marks >= 90) {
    //     cout << "Grade A+" << endl;
    // } else if ( marks >= 80) {
    //     cout << "Grade A" << endl;
    // } else if (marks >= 70) {
    //     cout << "Grade B" << endl;
    // } else {
    //     cout << "Grade ";
    // }

    int day = 3;
    switch(day) {
        case 1 :
        cout << " Monday";
        break;

        case 2 :
        cout << " Tuesday";
        break;

        case 3 :
        cout << " wednesday";
        break;

        default :
        cout << "Invalid day";
    }
    return 0;
}