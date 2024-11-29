#include <stdio.h>

// Function 1: No arguments passed and no return value
void display_welcome() {
    printf("Welcome to CHARUSAT University!\n");
    printf("===============================\n");
}

// Function 2: No arguments passed but a return value
int get_student_count() {
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    return count;
}

// Function 3: Argument passed but no return value
void collect_grades(int student_count, float grades[]) {
    printf("\nStudent Grades:\n");
    for (int i = 0; i < student_count; i++) {
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
        printf("Student %d: Grade = %.2f\n", i + 1, grades[i]);
    }
}

// Function 4: Argument passed and a return value
float calculate_average(int student_count, float grades[]) {
    float sum = 0;
    for (int i = 0; i < student_count; i++) {
        sum += grades[i];
    }
    return (student_count == 0) ? 0 : sum / student_count;
}

int main() {
    // Function 1: Display welcome message
    display_welcome();

    // Step 1: Get the number of students
    int student_count = get_student_count();

    // Step 2: Declare an array to store grades and collect grades for each student
    float grades[student_count]; // Dynamic allocation based on student_count
    collect_grades(student_count, grades);

    // Step 3: Calculate and display average grade
    float average = calculate_average(student_count, grades);
    printf("\nThe average grade of the students is: %.2f\n", average);
    printf("\n\n24DCS090_Vaishnavi\n");
    return 0;
}
