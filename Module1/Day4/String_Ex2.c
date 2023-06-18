#include <stdio.h>

int stringToInt(char *str) {
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        int ival = str[i] - '0';
        res = res * 10 + ival;
        i++;
    }

    return res;
}

int main() {
    char str[20];
    printf("Enter the integer in string formate:");
    scanf("%s",&str);
    int result = stringToInt(str);
    printf("Converted integer: %d\n", result);

    return 0;
}

