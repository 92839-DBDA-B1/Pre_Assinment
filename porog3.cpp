#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int t1 = 0, t2 = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    cout << endl;
    return 0;
}
