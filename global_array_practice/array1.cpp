#include <iostream>
using namespace std;

void printArray(int myArr[], int n) {
    for (int i=0; i<n; i++) {
        cout << myArr[i] << " ";
    }
}
int main() {
    //declaring and initializing an array of size 5
    int arr [5] = {2,4,8};
    int arr1 [5] = {2,4,8,12,16};

    // printing array elements or traversing 
    for (int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //accessing 4th value
    cout << arr1[3] << endl;
    //accessing 1st value
    cout << arr1[0] << endl;

    //updating array element
    arr1[0] = 23;
    // cout << "New First element of array1 : " << arr1[0] << endl;


    //size of array
    char arr2[] = {'a','b','c','d','e'};
    
    //size of one element of an array
    cout << "Size of arr2[0] : " << sizeof(arr2[0]) << endl;
    //size of array
    cout << "Size of arr2 : " << sizeof(arr2) << endl;
    //length of array
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Length of an array :" << n << endl;


    int arr4[5];
    //Printing array name 
    cout << arr4 << endl;
    //Printing address of 1st element of arr
    cout << &arr4[0] << endl;


    //arrays and pointer
    // Define a pointer to first element
    int* ptr = arr1;

    for (int i = 0; i < 5; i++)
    cout << *(ptr + i) << " ";


    //pass array to function
    int myArr[] = {12,13,14,15,16};
    int lengthOfmyArr = sizeof(myArr) / sizeof(myArr[0]);
    //passing myArr
    printArray(myArr, lengthOfmyArr);
    return 0;
}