//Lab 6

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    bool isPrime = true;

    if (N <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << N << " is a Prime Number";
    else
        cout << N << " is NOT a Prime Number";

    return 0;
}
