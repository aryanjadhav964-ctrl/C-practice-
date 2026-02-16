#include <iostream>         //header file
#include <iomanip>
#define PI 3.14             //preprosesor directive 
using namespace std;        // use for cout and cin

int areaOfRect();           //function prototype
void isPass();              //function prototype
void first_10_Nums();       //function prototype
float sumOfTwoNum(float num1,float num2);   //function prototype


void student_entry() {          //function definition
    string name;
    int age;
    float marks;

    cout << "Enter student name : ";
    getline(cin, name);
    cout << "Enter student age : ";
    cin >> age;
    cout << "Enter student marks : ";
    cin >> marks;
    cout << " " << endl;
    cout << "Student details : " << endl;
    cout << "Student name : " << name << endl;
    cout << "Student age : " << age << endl;
    cout << "Student marks : " << marks << endl;
}

struct student {        //structure
    string name;
    int age;
};

int main() {            //main function[ Starting point ].
    float num1,num2;
    //Write a program that takes a student's name, age, and marks (with decimals) as input and displays them.
    // student_entry();

    //Write a program to calculate the area of a rectangle. Take length and breadth as input from the user.
    // float area = areaOfRect();
    // cout << "Area of the rectangle is : " << area << endl;

    //Write a program that takes a student's marks as input and prints: pass or fail
    // isPass();

    // Write a program to print the first 10 natural numbers (1 to 10) using a for loop.
    // first_10_Nums();

    //Write a function that takes two numbers as parameters and returns their sum. Call this function from main() and display the result.
    // cout << "Enter 1st Number : ";
    // cin >> num1;
    // cout << "Enter 2nd Number : ";
    // cin >> num2;
    // float sum = sumOfTwoNum(num1,num2);
    // cout << "Sum of 2 number you entered is : " << sum << endl;

    //type casting in cpp
    float y = 5.6;
    int a = (int)y;

    int b = 5;
    float c = (float)b;
    char d = 5;

    cout << d << endl; //its giving blank value in terminal.
    cout << b << endl;
    cout << c << endl;

    cout << setw(10) << 50; //adds space before cout 

    student s1;
    s1.name = "aryan";
    s1.age = 19;

    cout << s1.name;
    return 0;
}
void isPass() {             //function definition
    float marks;
    cout << " Enter Sudents Marks : ";
    cin >> marks;

    if (marks >= 40 && marks <= 100){
        cout << "Student is pass. " << endl;
    } else if (marks > 100 || marks < 0){
        cout << "Invalid input" << endl;
    } else {
        cout << "Student is fail" << endl;
    }
}
int areaOfRect() {
    float area, length, breadth;
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Breadth : ";
    cin >> breadth;
    area = length * breadth;
    return area;
}
void first_10_Nums() {
    int i;
    cout << "First 10 natural numbers : ";
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
}
float sumOfTwoNum(float num1,float num2){
    float sum = num1 + num2;
    return sum;
}