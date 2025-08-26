#include <stdio.h>

// Structure definition
struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// Function to initialize employee
void emp_init(struct Employee *e) {
    printf("Enter First Name: ");
    scanf("%s", e->firstName);

    printf("Enter Last Name: ");
    scanf("%s", e->lastName);

    printf("Enter Monthly Salary: ");
    scanf("%lf", &e->monthlySalary);

    // If salary is negative, reset to 0
    if (e->monthlySalary < 0) {
        e->monthlySalary = 0.0;
    }
}

// Function to set/modify salary
void set_salary(struct Employee *e, double sal) {
    if (sal >= 0)
        e->monthlySalary = sal;
    else
        printf("Invalid Salary! Keeping old value.\n");
}

// Function to display employee details
void emp_display(struct Employee *e) {
    printf("\nEmployee Details:\n");
    printf("Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: %.2lf\n", e->monthlySalary);
    printf("Yearly Salary: %.2lf\n", e->monthlySalary * 12);
}

int main() {
    struct Employee emp1, emp2;

    // Initialize two employees
    printf("Enter details for Employee 1:\n");
    emp_init(&emp1);

    printf("\nEnter details for Employee 2:\n");
    emp_init(&emp2);

    // Display initial yearly salaries
    printf("\n--- Initial Salaries ---");
    emp_display(&emp1);
    emp_display(&emp2);

    // Give each employee a 10% raise
    set_salary(&emp1, emp1.monthlySalary * 1.10);
    set_salary(&emp2, emp2.monthlySalary * 1.10);

    // Display updated yearly salaries
    printf("\n--- After 10%% Raise ---");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
