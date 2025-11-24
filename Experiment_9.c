/* NAME: siddesh
CLASS: CIVIL
ROLL NO: 31
UIN: 251C044
*/

#include <stdio.h>
#include <string.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5];
    int i;

    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter total marks: ");
        scanf("%f", &students[i].total_marks);
    }
}
