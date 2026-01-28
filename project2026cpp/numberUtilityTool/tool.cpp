#include <iostream>
using namespace std;
void displayMenu();
double sumOfDigits(int n);

int main() {
    cout << "======================================" << endl;
    cout << "Number Utility Tool started!" << endl;
    cout << "You are using Number Utility Tool." << endl;
    cout << "======================================" << endl;

    int choise;
    int number;

    do {
        displayMenu();

        //to get chose
        cout << "Enter you choise between [1-5] : " << endl;
        cin >> choise;

        switch(choise) {
            case 1: {
            //call sumOfDigit function
            cout << "---Sum of digits---" << endl;
            cout << "Enter the Number : ";
            cin >> number;
                cout << endl;
            int result = sumOfDigits(number);
            cout << "Sum of digits of" << number << " = " << result << endl;
            break;
            }

            case 2:
            //call factorial function
            break;

            case 3:
            //call multipilaction function
            break;

            case 4:
            //call subtraction function
            break;

            case 5:
            //call palindrome function
            break;

            case 6 :
            //exit
            break;

            default :
            cout << "You entered invalid number! Try agian." << endl;
            break;
        }

    } while(choise = 6);
}

void displayMenu() {
    cout << "===============================" << endl;
    cout << "               main mannu      " << endl;
    cout << "===============================" << endl;
    cout << "1. Sum of numbers" << endl;
    cout << "2. Factorial finder" << endl;
    cout << "3. Multiplication of numbers" << endl;
    cout << "4. Subtraction of numbers" << endl;
    cout << "5. Sum of digits" << endl;
    cout << "6. Is number palindrome?" << endl;
    cout << "7. Exit" << endl;

}
//1 : sumOfDigits function 
double sumOfDigits(int n) {
    n = abs(n); //handle negative values

    int sum = 0;
    while (n > 0) {
        sum += n % 10; //get last digit and add to sum
        n /= 10; //remove last digit
    }
    return sum;

}