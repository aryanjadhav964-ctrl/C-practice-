#include <iostream>
using namespace std;

int main() {
    int arr[50];
    int n, pos, value;

    cout << "Enter the number of array : ";
    cin >> n;

    cout << "Enter array elements :\n";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to insert (1-based) : ";
    cin >> pos;

    cout << "Enter value to insert : \n";
    cin >> value;

    //shift element to the right
    for (int i=n; i>=pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos - 1] = value;
    n++;

    cout << "Array after insertion : \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 

    return 0;
}