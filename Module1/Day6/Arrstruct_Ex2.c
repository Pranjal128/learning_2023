#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStruct(const char* str, struct Student* students, int size) {
    char temp[100];
    strcpy(temp, str);

    char* token = strtok(temp, " ");
    int i = 0;

    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
        i++;
    }
}
void initializeStructArray(struct Student* students, int r, char n,float m ) {
	
        students->rollno = r;
        strcpy(students->name, n);
        students->marks = m;
}
int main() {
    int size,i;
    char str[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    getchar(); // Clearing the newline character from the buffer

    struct Student* students = malloc(size * sizeof(struct Student));

    printf("Enter the string of student data: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Removing the newline character from the string

    parseStringToStruct(str, students, size);
	for ( i = 0; i < size; i++){
		int r;
		char n[30];
		float m;
		initializeStructArray(&students[i],r,n,m);	
}
    // Display the initialized array of structures
    for ( i = 0; i < size; i++) {
    	
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}

