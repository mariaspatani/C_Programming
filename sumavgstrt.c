// Develop a program to calculate the total and average marks of a group of students using an array of structures. Include student name, roll number, and marks in three subjects.
#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks[3]; // Marks in three subjects
    float total;
    float average;
};

int main() {
    int n; // Number of students

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of structures
    struct Student students[n];

    // Get the details of each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Get student's name, roll number, and marks
        printf("Name: ");
        getchar(); // To clear the buffer before reading a string
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character from name

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }

        // Calculate total and average directly in main
        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        students[i].average = students[i].total / 3;
    }

    // Display the details of each student along with their total and average marks
    printf("\n\nStudent Report:\n");
    printf("----------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks in Subjects: %.2f, %.2f, %.2f\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Average Marks: %.2f\n", students[i].average);
        printf("----------------------------------------------------\n");
    }

    return 0;
}

