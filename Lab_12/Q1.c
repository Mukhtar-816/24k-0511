#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n;
    float totalMarks = 0.0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        size_t len = strlen(students[i].name);
        if (students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        totalMarks += students[i].marks;
    }

    float averageMarks = totalMarks / n;
    printf("\nThe average marks of the class: %.2f\n", averageMarks);

    free(students);

    return 0;
}
