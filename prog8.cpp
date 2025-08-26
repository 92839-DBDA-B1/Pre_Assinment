#include <iostream>
#include <string>
using namespace std;

// Define structure
struct Student {
    string studentName;
    string rollNo;   // alphanumeric roll number
    int totalMarks;
};

// Function to read student data
void readStudent(Student &s) {
    cout << "Enter student name: ";
    getline(cin, s.studentName);   // use getline for full name

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter total marks: ";
    cin >> s.totalMarks;
}

// Function to display student data
void displayStudent(const Student &s) {
    cout << "\n--- Student Details ---" << endl;
    cout << "Name       : " << s.studentName << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Marks      : " << s.totalMarks << endl;
}

int main() {
    Student s;

    // Clear buffer before getline

    readStudent(s);
    displayStudent(s);

    return 0;
}
