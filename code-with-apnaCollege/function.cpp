#include <iostream>
using namespace std;
void hello();

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


    double result = calSum(5);
    cout << "Sum : " << result << endl;

    return 0;
}

void hello() {
    cout << "Hello User!" << endl;
}