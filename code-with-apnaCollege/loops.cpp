#include <iostream>
using namespace std;
int main() {
    //check if number is prime or not
    int n = 7;
    bool isPrime = true;

    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime == false ) {
        cout << "The number is non-Prime number" << endl;
    } else {
        cout << "The number is Prime number" << endl;
    }


    return 0;

}
