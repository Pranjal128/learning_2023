#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int rollno;
    float per;
};
typedef struct Student Student;
void disData(Student* ptr,int n)
{
	int i;
	printf("\nStudent Data:");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", ptr[i].name);
        printf("Roll number: %d\n", ptr[i].rollno);
        printf("Percentage: %.2f\n",ptr[i].per);
    }
}
int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student* students = (Student*)malloc(n * sizeof(Student));

    // Read data for each student
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter the name: ");
        scanf("%s", students[i].name);
        printf("Enter the roll number: ");
        scanf("%d", &(students[i].rollno));
        printf("Enter the percentage: ");
        scanf("%f", &(students[i].per));
    }

    disData(students,n);
    free(students);

    return 0;
}

