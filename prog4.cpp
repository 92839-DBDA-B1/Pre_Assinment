#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;

    cout << "Enter marks of 5 subjects (out of 100): " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // average percentage
    float percentage = total / 5.0;

    cout << "Total Percentage = " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: Ex" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
