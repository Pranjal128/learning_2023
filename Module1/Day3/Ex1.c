#include <stdio.h>

void printNumbersForward(int n);
void printSpaces(int n);
void printNumbersReverse(int n);
void printPattern(int n);
int i,j,k;
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printPattern(n);
    
    return 0;
}

void printNumbersForward(int n) {
   for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
}

void printSpaces(int n) {
    for (k = 0; k < 2 * (n - i) ; k++) {
            printf(" ");
        }
}

void printNumbersReverse(int n) {
   for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
}

void printPattern(int n) {
    for (i = n; i >= 1; i--) {
        printNumbersForward(i);
        printSpaces(n );
        printNumbersReverse(i);
        printf("\n");
    }
}

