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

    return 0;
} 