#include <iostream>
using namespace std;

// Recursive function for Octal conversion
void toOctal(int n) {
    if (n == 0) return;
    toOctal(n / 8);
    cout << n % 8;
}

// Recursive function for Hexadecimal conversion
void toHex(int n) {
    if (n == 0) return;
    toHex(n / 16);
    int rem = n % 16;
    if (rem < 10)
        cout << rem;
    else
        cout << char('A' + rem - 10);
}

// Function for Binary using bitwise operators
void toBinary(int n) {
    bool started = false;
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;  // extract bit
        if (bit) started = true;
        if (started) cout << bit;
    }
    if (!started) cout << 0; // if number is 0
}

int main() {
    int num;
    cout << "Enter Number : ";
    cin >> num;

    cout << "Given Number : " << num << endl;

    cout << "Binary equivalent      : ";
    toBinary(num);
    cout << endl;

    cout << "Octal equivalent       : ";
    if (num == 0) cout << 0;
    else toOctal(num);
    cout << endl;

    cout << "Hexadecimal equivalent : ";
    if (num == 0) cout << 0;
    else toHex(num);
    cout << endl;

    cout << "Sunbeam Institute of Information Technology" << endl;

    return 0;
}
