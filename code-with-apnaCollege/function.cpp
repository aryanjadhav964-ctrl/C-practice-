#include <iostream>
using namespace std;

void hello();
int nFactorial(double n);

int addTwoNums(double num1,double num2) {//parameters[copy of the arguments]
    return num1 + num2;
}

int minValue(double num1, double num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
    
}

//cal sum of num from 1 to n by using functions
int calSum(double n) {
    double sum=0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

//pass by value 
int changeX(int x) {
    x = 2*x;
    cout << "The value of X : " << x << endl;
}


//function to calculate sum of number of digit
int sumOfDigit (int num) {
    int digSum = 0;

    while (num > 0) {
        int lastDig= num % 10;
        num /= 10;
        
        digSum += lastDig;
    }
    return digSum;
}

int main() {

    // hello();

    // double sum = addTwoNums(5,6);//arguments[actual values pass to a fuction]
    // cout << sum << endl;

    // int min = minValue(2,10);
    // cout << "Minimum value : " << min << endl;

    // int num = 1;
    // for (int i=1; i<=10; i++) {
    //     hello();
    //     cout << i << endl;
    // }


    // double result = calSum(5);
    // cout << "Sum : " << result << endl;

    // double factResult = nFactorial(5);
    // cout << "Factorial of n you entered : " << factResult << endl;

    //pass by value
    // int x = 5;
    // changeX(x);

    // cout << "The X : " << x << endl;

    cout << "Sum of digits : " << sumOfDigit(2356) << endl;

    return 0;
}

void hello() {
    cout << "Hello User!" << endl;
}

//function to calculate factorial of n
int nFactorial (double n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}