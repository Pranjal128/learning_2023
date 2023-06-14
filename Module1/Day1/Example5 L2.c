#include <stdio.h>

int findCharType(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    } else if (ch >= 'a' && ch <= 'z') {
        return 2;
    } else if (ch >= '0' && ch <= '9') {
        return 3;
    } else if (ch >= 32 && ch <= 126) {
        return 4;
    } else {
        return 5;
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    int type = findCharType(ch);
    printf("Character type: %d\n", type);
    
    return 0;
}

