#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[26] = {0}; // frequency array for A-Z

    // Count frequency (case-insensitive)
    for (char ch : str) {
        if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        } else if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    // Display results
    cout << "\nOccurrences of each alphabet:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << (char)(i + 'A') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
