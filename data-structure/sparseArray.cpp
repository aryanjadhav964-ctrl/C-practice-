#include <iostream>
using namespace std;

int main() {
    int arr[100], n, zeroCount = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            zeroCount++;
        }
    }

    if(zeroCount > n / 2) {
        cout << "It is a Sparse Array";
    } else {
        cout << "It is NOT a Sparse Array";
    }

    return 0;
}
