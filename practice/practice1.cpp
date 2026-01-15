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

    // int day = 3;
    // switch(day) {
    //     case 1 :
    //     cout << " Monday";
    //     break;

    //     case 2 :
    //     cout << " Tuesday";
    //     break;

    //     case 3 :
    //     cout << " wednesday";
    //     break;

    //     default :
    //     cout << "Invalid day";
    // }


    //square pattern by using numbers
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
// //Star pattern
//     cout << endl;

//      for (int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// //character pattern
//      for (int i = 0; i < n; i++) {
//         char ch = 'A';
//         for(int j = 0; j < n; j++) {
//             cout << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }

//another type 
    // int num = 1;
    // for (int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n; j++) {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }


    //charecter version home work

    // char ch = 'A';
    // for (int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n; j++) {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << " Enter the number n : ";
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i+1; j++) {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }


    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i+1; j++) {
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }


    // for (int i = 0; i < n; i++) {
    //     for (int j = 1; j <= i+1; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = i+1; j > 0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

//Floyd's trangle pattern
    // int num = 1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 1; j <= i+1; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    int num=1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout <<  " ";
        }

        //num
        for (int j=0; j<n-i; j++) {
            cout << (i+1);
        }

        cout << endl;
    }
    return 0;
}