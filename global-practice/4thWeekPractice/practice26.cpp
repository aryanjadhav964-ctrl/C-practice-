#include <iostream>
using namespace std;
//level 1 question practice + logic building
//Write a function that takes an integer pointer and prints the value stored at that address.
void print(int *number){
    *number = 20;
    cout << *number << endl;
}

//Write a function that takes two integers using pointers and swaps their values.
void swipeValue(int *var1,int *var2) {
    cout << "Value of a through pointer before logic = " << *var1 << endl;
    cout << "Value of b through pointer before logic = " << *var2 << endl;
    //swiping logic
    *var1 = *var1 + *var2;
    *var2 = *var1 - *var2;
    *var1 = *var1 - *var2;

    cout << "Value of a through pointer after logic = " << *var1 << endl;
    cout << "Value of b through pointer after logic = " << *var2 << endl;


}

//Write a function that takes a pointer to float and updates its value by multiplying it by 2.
float pointer(float* ptr1,float* ptr2) {
    *ptr1 = *ptr1 * 2;
    *ptr2 = *ptr2 * 2;
    cout << *ptr1 << " & " << *ptr2 << endl;
}

//level 2 Questions according to chatgpt 
void basicMath(int* num1, int* num2) {
    float sum = *num1 + *num2;
    cout << "Addition of " << *num1 << " and " << *num2 << " is = " << sum << endl;
    float sub = *num1 - *num2;
    cout << "Subtraction of " << *num1 << " and " << *num2 << " is = " << sub << endl;
    float mul = (*num1) * (*num2);
    cout << "Addition of " << *num1 << " and " << *num2 << " is = " << mul << endl;
}

//Write a function that finds maximum of two numbers using pointers.
void findMax(int* num1,int* num2){
    if (*num1 > *num2){
        cout << *num1 << " Is greater" << endl;
    } else if(*num1 == *num2) {
        cout << "You entered same number!" << endl;
        cout << "First number should be different from second number." << endl;
    } else {
        cout << *num2 << "  Is greater" << endl;
    }
}

//Write a function that takes an integer pointer and:
//checks whether the number is even or odd
void numEvenOrOdd(int* num1){
    if (*num1 % 2 == 0) {
        cout << *num1 << " Is a EVEN number." << endl;
    } else {
        cout << *num1 << " Is a ODD number." << endl;
    }
}

//Write a function that takes a pointer and sets its value to 0.
void valueZeroMaker(int* num1) {
    cout << "Value you entered of variable num1 is = " << *num1 << endl;
    *num1 = 0;
    cout << "Now Value of variable num1 is : " << *num1 << endl;
}
int main() {
 //level 1 question practice + logic building
    int a = 10;
    int b = 20;
    int* num = &a;
    // cout << *num << endl;
    // print(num);
    // cout << *num ; 

    //printing values of 2 variables before the function use
    // cout << "Original Variable a = " << a << endl;
    // cout << "Original Variable b = " << b << endl;
    // swipeValue(&a,&b);

    /*  Create a program that prints:
    value of a variable
    address of a variable
    value using pointer  */
    //prints value of variable    
    // cout << "Value of a variable : " << a << endl;
    // cout << "Value of b variable : " << b << endl;
    //prints address of the variable
    // cout << "address of a variable : " << &a << endl;
    // cout << "address of b variable : " << &b << endl;
    //printing value using pointer
    int* ptra = &a;
    int* ptrb = &b;
    // cout << "value of a variable using pointer : " << *ptra << endl;
    // cout << "value of b variable using pointer : " << *ptrb << endl;

    float c = 5,d =6;
    // pointer(&c, &d);


    //level 2 = pointer + Function

    /*Write a function that takes two numbers using pointers and:
    adds them
    subtracts them
    multiplies them
    (print results inside the function) */
    int num1, num2;
    cout << "Enter num1 : ";
    cin >> num1;
    
    // cout << "Enter num2 : ";
    // cin >> num2;

    // basicMath(&num1, &num2);
    // findMax(&num1,&num2);
    // numEvenOrOdd(&num1);
    // valueZeroMaker(&num1); //Function makes number zero
    // cout << num1 << endl;
    return 0;
} 