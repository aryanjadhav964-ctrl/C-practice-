#include <iostream>
using namespace std;

int main() {
    //write a program to print the sum of nums from 1 - 100

    int sum = 0;
    int i = 0;
    for (i = 0; i <= 100; i++) {
        sum = sum + i;
    }

    // cout << "The sum of first 100 nums is : " << sum << endl;

    //Write a program to find the factorial of a number.
    int n;
    long long factorial = 1;
    // cout << "Enter the number : ";
    // cin >> n;

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    // cout << " The factorial of " << n << " is : " << factorial << endl;

    //practice
    int userNum;
    cout << "Enter the number : ";
    cin >> userNum;

    int a = 0;
    while ( a<= userNum) {
        cout << a << " ";
        a++;
    }
    return 0;
}