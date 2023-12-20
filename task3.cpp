#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int newSize = 10;
    int b[newSize] = {0};

    for (int i = 0; i < 5; ++i) {
        b[i] = a[i];
    }

    for (int i = 5; i < newSize; ++i) {
        b[i] = i + 1; 
    }

    cout << "All elements in the array:" << endl;
    for (int i = 0; i < newSize; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
