#include <iostream>
using namespace std;
void changes(int* ptr) {//pass by reference usnign pointer[ make changes in original value]
    *ptr = 20;
}
void changeA(int &b) {//pass by reference using alias[ make changes in original value]
    b = 30;
}

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
    // cout << "The subtraction is : " << sub << endl;

    //ponter with array [ Arrays are constant pointers] 
    int arr[3] = {10,20,30};
    int *ptrArray = arr; //ptrArray == index 0
    ptrArray++; //ptrArrya starts form next index 1[ adds 1 byte in address]
    cout << *ptrArray << endl;

    int newarr[] = {55,44,33,22,11};
    // cout << *newarr << endl; //index 0 value 
    // cout << *(newarr+1) << endl; // index 1 value
    // cout << *newarr+1 << endl;//adds 1 in index 0 value 


    // cout << *(ptrArray) << endl; //index 0 value will print
    // cout << *(ptrArray+1) << endl; //index 1 value will print
    // cout << *(ptrArray+2) << endl; //index 2 value will print

    //pass by referance using pointer 
    // int a = 10;
    changes(&a);
    // cout << a << endl;
    //pass by referance using alias
    changeA(a);
    // cout << a << endl;


    //pointer arithmatics



    return 0;
} 