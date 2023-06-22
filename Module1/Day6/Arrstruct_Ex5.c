#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStruct(char* input, struct Student* students, int numStudents) {
    char* token = strtok(input, " ");
    int i = 0;

    while (token != NULL && i < numStudents) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name));
        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
        i++;
    }
}

void initializeStructArray(struct Student* students, int numStudents) {
	int i;
    for (i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

void displayStructArray(struct Student* students, int numStudents) {
	int i;
    for (i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

void searchByName(struct Student* students, int numStudents, const char* name) {
    int found = 0,i;

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n\n", name);
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Consume the newline character left in the input buffer
    getchar();

    char input[100];
    printf("Enter student data (Roll No Name Marks): ");
    fgets(input, sizeof(input), stdin);

    struct Student students[numStudents];

    parseStringToStruct(input, students, numStudents);

    printf("\n--- Student Information ---\n");
    displayStructArray(students, numStudents);

    char searchName[20];
    printf("Enter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove the newline character from input

    searchByName(students, numStudents, searchName);

    return 0;
}

