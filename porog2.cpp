#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;   // to handle large values

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}
