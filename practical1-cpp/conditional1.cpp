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

    // int number;
    // cout << "Enter the number : ";
    // cin >> number;

    // if (number == 0) {
    //     cout << number << " is Zero" << endl; 
    // } else if (number >= 0) {
    //     cout << number << " is Positive" << endl;
    // } else {
    //     cout << number << " is Negative" << endl;
    // }

    //odd and and even  
    // if (num % 2 == 0) {
    //     cout << num << " is a even num." << endl;
    // } else {
    //     cout << num << " is a odd number." << endl;
    // }


    //loops ========> 
    //sum of nums from 1 to 100
    double sum = 0;
    for (int i=1; i<=100; i++) {
        sum += i;
    }
    // cout << "Sum is : " << sum << endl;

    //factoril of a number  
    double fact = 1;
    for (int i=1; i<=num; i++) {
        fact *= i;
    }
    // cout << "Factorial is : " << fact << endl;


    //larget number of array
    int n;
    // cout << "Enter the size of array : \n";
    // cin >> n;
    
    int array[n];

    // cout << "Enter the array elements : \n";
    // for (int i = 0; i < n; i++ ) {
    //     cin >> array[i];
    // }

    int largest = array[0];

    for (int i=0; i<n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }



    // cout << "Largest value of array is : " << largest << endl;

    //pointer ===>

    //A pointer is a variable that stores the address of another variable
    return 0;
}
