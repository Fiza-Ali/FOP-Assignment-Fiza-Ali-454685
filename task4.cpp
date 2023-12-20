#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 1) {
        cout << "No prime number less than or equal to " << n << endl;
        return 0;
    }

    int largestPrime = 0;
    int currentNumber = n - 1;

    while (currentNumber > 1) {
        int isPrime = 1;

        for (int i = 2; i * i <= currentNumber; ++i) {
            if (currentNumber % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            largestPrime = currentNumber;
            break;
        }
        currentNumber--;
    }

    if (largestPrime != 0)
        cout << "The largest prime number less than or equal to " << n << " is: " << largestPrime << endl;
    else
        cout << "No prime number less than or equal to " << n << endl;

    return 0;
}
