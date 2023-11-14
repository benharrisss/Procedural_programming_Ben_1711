#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [10]; 
    unsigned mark;
};

int main () {
    struct student new_student;
    strcpy(new_student.name, "Ben Harris");
    strcpy(new_student.student_id, "201714671");
    printf("Enter the mark: ");
    scanf("%u", &new_student.mark);
    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);
    return 0;
}    