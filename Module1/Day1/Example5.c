#include <stdio.h>

int bitOper(int num, int operType) {
    if (operType == 1) {
        // Set 1st bit
        num |= 1;
    } else if (operType == 2) {
        // Clear 31st bit
        num &= ~(1 << 31);
    } else if (operType == 3) {
        // Toggle 16th bit
        num ^= (1 << 16);
    }
    
    return num;
}

int main() {
    int num, operType;
    scanf("%d %d", &num, &operType);
    
    int result = bitOper(num, operType);
    printf("%d\n", result);
    
    return 0;
}

