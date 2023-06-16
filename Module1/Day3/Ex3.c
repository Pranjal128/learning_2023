#include <stdio.h>
#include <string.h>

int removeDigit(int num) {
    char str[5];
    sprintf(str, "%d", num);
    int len = strlen(str);
	int i,j;
    for (i = 0; i < len - 1; i++) {
        if (str[i] < str[i + 1]) {
            for (j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0';
            break;
        }
    }

    return atoi(str);
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input. Please enter a 4-digit number.\n");
        return 0;
    }

    int largestNumber = removeDigit(num);

    printf("The largest number after removing a single digit: %d\n", largestNumber);

    return 0;
}
