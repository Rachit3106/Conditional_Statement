/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "The character '" << ch << "' is a vowel." << endl;
    } else {
        cout << "The character '" << ch << "' is a consonant." << endl;
    }

    return 0;
}
/*
Output:
1) Enter a character: x
The character 'x' is a consonant.
2) Enter a character: A
The character 'A' is a vowel.
*/