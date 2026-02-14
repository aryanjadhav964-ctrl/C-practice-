#include <iostream>
using namespace std;
int main() {
    //array insertion
    int arr[100],n,pos,value;

    cout << "Enter the number of elements to store in array : ";
    cin >> n;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Your array elemets are : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "Enter the position to Insert : ";
    cin >> pos;

    cout << "Enter the value to insert : ";
    cin >> value;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = value;
    n++;
    cout << "Your array element after insertion" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}