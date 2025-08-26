#include <iostream>
using namespace std;

// Function to reverse the string
void reverseString(string &str) {
    int i = 0, j = str.length() - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);   // read full line with spaces

    cout << "Original String: " << str << endl;

    reverseString(str);

    cout << "Reversed String: " << str << endl;

    return 0;
}
