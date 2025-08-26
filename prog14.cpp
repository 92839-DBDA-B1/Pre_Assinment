#include <iostream>
using namespace std;

// Custom strcmp function
int myStrCmp(const char* s1, const char* s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main() {
    // Array of char* (hard-coded strings)
    char* arr[] = {
        (char*)"apple",
        (char*)"banana",
        (char*)"mango",
        (char*)"apple",
        (char*)"grape",
        (char*)"banana",
        (char*)"orange"
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate Strings in the Array:" << endl;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (myStrCmp(arr[i], arr[j]) == 0) {
                cout << arr[i] << endl;
                found = true;
                break; // avoid printing duplicates multiple times
            }
        }
    }

    if (!found) {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
