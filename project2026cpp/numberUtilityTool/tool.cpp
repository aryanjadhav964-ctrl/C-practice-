#include <iostream>
#include <limits>
using namespace std;
void displayMenu();
int sumOfDigits(int n);
int factorial(int n);

int main() {
    cout << "======================================" << endl;
    cout << "Number Utility Tool started!" << endl;
    cout << "You are using Number Utility Tool." << endl;
    cout << "======================================" << endl;

    int choice;
    int number;
    int ans;

    displayMenu();

    do {

        //to get chose
        cout << "Enter your choise between [1-6] : " << endl;
        cin >> choice;

        if (cin.fail()) {
        cin.clear(); // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please enter a number between 1 to 6.\n";
        continue;
    }
        

        switch(choice) {
            case 1: {
            //call sumOfDigit function
            cout << "---Sum of digits---" << endl;
            cout << "Enter the Number : ";
            cin >> number;
            cout << " " << endl;
            int result = sumOfDigits(number);
            cout << "Sum of digits of " << number << " = " << result << endl;
            cout << " " << endl;
            break;
            }

            case 2: {
            //call factorial function
            cout << "--- Factorial of number---" << endl;
            cout << "Enter the Number : ";
            cin >> number;
            cout << " " << endl;
            int result = factorial(number);
            cout << "Factorial of " << number << " = " << result << endl;
            cout << " " << endl;
            break;
            }

            case 3:{
            //call multipilaction function
            cout << "Currently this function is not working!" << endl;
            cout << "It will start soon." << endl;
            cout << "You can kindly enter 6 and EXIT." << endl;
            cout << " " << endl;
            break;
            }

            case 4:{
            //call subtraction function
            cout << "Currently this function is not working!" << endl;
            cout << "It will start soon." << endl;
            cout << "You can kindly enter 6 and EXIT." << endl;
            cout << " " << endl;
            break;
            }

            case 5:{
            //call palindrome function
            cout << "Currently this function is not working!" << endl;
            cout << "It will start soon." << endl;
            cout << "You can kindly enter 6 and EXIT." << endl;
            cout << " " << endl;
            break;
            }

            case 6 :{
            //exit
            choice = 6;
            break;
            }

            default : {
            cout << "You entered invalid number! Try agian." << endl;
            cout << " " << endl;
            break;
            }
        }

    } while(choice != 6);
}

void displayMenu() {
    cout << "===============================" << endl;
    cout << "               main menu      " << endl;
    cout << "===============================" << endl;
    cout << "1. Sum of digits" << endl;
    cout << "2. Factorial finder" << endl;
    cout << "3. Multiplication of numbers" << endl;
    cout << "4. Subtraction of numbers" << endl;
    cout << "5. Is number palindrome?" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

}
//1 : sumOfDigits function 
int sumOfDigits(int n) {
    n = abs(n); //handle negative values

    int sum = 0;
    while (n > 0) {
        sum += n % 10; //get last digit and add to sum
        n /= 10; //remove last digit
    }
    return sum;

}

//2 : Factorial function
int factorial(int n) {
    n = abs(n);
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}