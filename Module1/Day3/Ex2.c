#include <stdio.h>

void printBits(unsigned int num) {
    // Number of bits in an unsigned int
    int numBits = sizeof(unsigned int) * 8;
    int i;
   printf("Bits: ");
    for (i = 31; i >= 0; i--) {
              unsigned int bit = (num >> i) & 1;
   			 printf("%u", bit);
    }
    
    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
	printBits(num);
    
    return 0;
}

