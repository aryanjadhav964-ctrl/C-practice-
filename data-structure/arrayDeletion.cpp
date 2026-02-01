#include <iostream>
using namespace std;
int main() {
    //array element deletion
    int arr[50];
    int n, pos;

    cout << "Enter the element of Array : ";
    cin >> n;

    for (int i=0; i<n; i++ ) {
        cin >> arr[i];
    }

    cout << "Enter postion to delete : ";
    cin >> pos;

    //shifting to left
    for (int i=pos-1; i<n-1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    
    cout << "Array after deletion : "  << endl;
     for (int i=0; i<n; i++ ) {
        cout << arr[i] << " ";
    }
    return 0;
}