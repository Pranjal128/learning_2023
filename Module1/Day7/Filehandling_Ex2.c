#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void changeTextCase(FILE* f1, FILE* f2, int option) {
    int ch;
    int prevChar = '\0';
    int newChar;

    while ((ch = fgetc(f1)) != EOF) {
        if (option == 's' && prevChar == '.' && !isspace(ch)) {
            newChar = toupper(ch);
        } else {
            switch (option) {
                case 'u':
                    newChar = toupper(ch);
                    break;
                case 'l':
                    newChar = tolower(ch);
                    break;
                default:
                    newChar = ch;
            }
        }

        fputc(newChar, f2);
        prevChar = ch;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments!\n");
        return 1;
    }

    int option = '\0';
    FILE* f1;
    FILE* f2;

    if (argv[1][0] == '-') {
        option = argv[1][1];
        f1 = fopen(argv[2], "r");
        f2 = fopen(argv[3], "w");
    } else {
        f1 = fopen(argv[1], "r");
        f2 = fopen(argv[2], "w");
    }

    if (f1 == NULL) {
        printf("Failed to open files.\n");
        return 1;
    }

    if (option == '\0') {
        int ch;
        while ((ch = fgetc(f1)) != EOF) {
            fputc(ch, f2);
        }
    } else {
        changeTextCase(f1, f2, option);
    }

    printf("File copied successfully.\n");

    fclose(f1);
    fclose(f2);

    return 0;
}

