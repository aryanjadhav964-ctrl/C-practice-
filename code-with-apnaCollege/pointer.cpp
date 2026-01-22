#include <iostream>
using namespace std;
int main() {

    int a=10;
    int* ptr = &a;
    // cout << &a << endl;
    // cout << ptr << endl;

    int var1 = 5;
    int var2 = 20;
    int *varPtr1 = &var1;
    int **varPtrPro1 = &varPtr1;
    int *varPtr2 = &var2;
    int **varPtrPro2 = &varPtr2;

    double sum = **(varPtrPro1) + **(varPtrPro2); //adition
    double sub = **(varPtrPro1) - **(varPtrPro2); //subtraction
    // cout << "The sum is : " << sum << endl;
    cout << "The subtraction is : " << sub << endl;

    //ponter with array
    int arr[3] = {10,20,30};
    int *ptrArray = arr;

    // cout << *(ptrArray) << endl; //index 0 value will print
    // cout << *(ptrArray+1) << endl; //index 1 value will print
    // cout << *(ptrArray+2) << endl; //index 2 value will print

    return 0;
} 