#include <iostream>
#include <cstring>
using namespace std;


bool areEqual(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

void rotateString(char str[]) {
    int len = strlen(str);
    char first = str[0];
    for (int i = 0; i < len - 1; ++i) {
        str[i] = str[i + 1];
    }
    str[len - 1] = first;
}

int main() {

    char input1[100], input2[100];
    
    cout << "Enter the first string: ";
    cin >> input1;
    
    cout << "Enter the second string: ";
    cin >> input2;
    
    if (areEqual(input1, input2)) {
        cout << "Strings are equal.\n";
        rotateString(input1);
        cout << "After rotation, String 1: " << input1 << ", String 2: " << input2 << endl;
    } else {
        cout << "Strings are not equal.\n";
    }
    
    return 0;
}
