#include <stdio.h>

int main() {
    int num_students, student_num, grade;
    int grades[100]; // Assuming a maximum of 100 students

    printf("How many students: ");
    scanf("%d", &num_students);

    // Initialize grades array to -1
    for (int i = 0; i < num_students; i++) {
        grades[i] = -1;
    }

    printf("Enter student number (1 - %d) or 0 to stop: ", num_students);
    scanf("%d", &student_num);

    while (student_num != 0) {
        if (student_num < 1 || student_num > num_students) {
            printf("Invalid student number!\n");
        } else {
            printf("Enter grade (0 - 5) for student %d or -1 to cancel: ", student_num);
            scanf("%d", &grade);

            if (grade < -1 || grade > 5) {
                printf("Invalid grade!\n");
            } else {
                grades[student_num - 1] = grade;
            }
        }

        printf("Enter student number (1 - %d) or 0 to stop: ", num_students);
        scanf("%d", &student_num);
    }

    printf("\nStudent\tGrade\n");
    for (int i = 1; i <= num_students; i++) {
        if (grades[i - 1] == -1) {
            printf("%d\tN/A\n", i);
        } else {
            printf("%d\t%d\n", i, grades[i - 1]);
        }
    }

    return 0;
}