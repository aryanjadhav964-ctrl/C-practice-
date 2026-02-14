#include <iostream>
using namespace std;
int main() {
    int n;
    cout << " enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << " Enter the array elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // traversing the array
    cout << " You entered array elements are : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}