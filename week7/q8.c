#include <stdio.h>

union Student {
    char name[50];
    int rollNumber;
    int marks[5];
};

int main() {
    union Student student;
    int i;
    float total = 0, percentage;

    printf("Enter the name of the student: ");
    scanf(" %[^\n]s", student.name);
    printf("Student Name: %s\n", student.name);

    printf("Enter the roll number of the student: ");
    scanf("%d", &student.rollNumber);
    printf("Roll Number: %d\n", student.rollNumber);

    printf("Enter marks in 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
        total += student.marks[i];
    }

    percentage = (total / 500) * 100;
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

