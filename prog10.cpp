
#include <iostream>
using namespace std;

int main() {
    char nameOfStudents[10][50];
    int n;

    cout << "How many students (max 10): ";
    cin >> n;

    cin.ignore(); // clear newline from buffer

    cout << "Enter " << n << " student names:" << endl;
    for (int i = 0; i < n; i++) {
        cin.getline(nameOfStudents[i], 50);
    }

    // Bubble Sort (manual string comparison and swap)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare strings manually
            int k = 0;
            while (nameOfStudents[j][k] != '\0' &&
                   nameOfStudents[j + 1][k] != '\0' &&
                   nameOfStudents[j][k] == nameOfStudents[j + 1][k]) {
                k++;
            }

            if (nameOfStudents[j][k] > nameOfStudents[j + 1][k]) {
                // Swap two strings manually
                char temp[50];
                int x = 0;
                while (nameOfStudents[j][x] != '\0') {
                    temp[x] = nameOfStudents[j][x];
                    x++;
                }
                temp[x] = '\0';

                x = 0;
                while (nameOfStudents[j + 1][x] != '\0') {
                    nameOfStudents[j][x] = nameOfStudents[j + 1][x];
                    x++;
                }
                nameOfStudents[j][x] = '\0';

                x = 0;
                while (temp[x] != '\0') {
                    nameOfStudents[j + 1][x] = temp[x];
                    x++;
                }
                nameOfStudents[j + 1][x] = '\0';
            }
        }
    }

    cout << "\nSorted Student Names:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nameOfStudents[i] << endl;
    }

    return 0;
}


