#include <stdio.h>

int main() {
    float salary, bonus;
    char grade;

    // get input from user
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter grade (A or B): ");
    scanf(" %c", &grade);

    // calculate bonus based on grade
    if (grade == 'A') {
        bonus = 0.05 * salary;
    } else if (grade == 'B') {
        bonus = 0.1 * salary;
    } else {
        printf("Invalid grade entered\n");
        return 1;
    }

    // add extra bonus if salary is less than $10,000
    if (salary < 10000) {
        bonus += 0.02 * salary;
    }

    // print final salary including bonus
    printf("Bonus amount: $%.2f\n", bonus);
    printf("Total salary: $%.2f\n", salary + bonus);

    return 0;
}
