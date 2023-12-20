#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char str[]) {
    int index = 0; 

    for (int i = 0; str[i]; ++i) {
        int duplicate = 0;

        for (int j = 0; j < index; ++j) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0'; 
}

int main() {
    char input[100];

    cout << "Enter a string: ";
    cin >> input;

    removeDuplicates(input);

    cout << "Resultant string after removing duplicates: " << input << endl;

    return 0;
}
