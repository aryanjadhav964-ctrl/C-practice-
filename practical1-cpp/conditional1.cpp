#include <iostream>
using namespace std;
int main () {

    //Write a program to check whether the number is even or odd.

    int num;
    // cout << "Enter the number :";
    // cin >> num;


    // if (num == 0) {
    //     cout << num << " is Zero number!" << endl;
    // } else if (num %2 == 0){
    //     cout << num << " is even number!" << endl;
    // } else {
    //     cout << num << " is odd number!" << endl;
    // }

    //Write a programto check whether the number is positive, negative or zero.

    int number;
    cout << "Enter the number : ";
    cin >> number;

    if (number == 0) {
        cout << number << " is Zero" << endl; 
    } else if (number >= 0) {
        cout << number << " is Positive" << endl;
    } else {
        cout << number << " is Negative" << endl;
    }
    return 0;
}
