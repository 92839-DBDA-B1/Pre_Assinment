#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int num, max;
    cout << "Enter number 1: ";
    cin >> max;   // take first number as maximum initially

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > max) {
            max = num;
        }
    }

    cout << "Maximum number is: " << max << endl;
    return 0;
}
