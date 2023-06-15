#include <stdio.h>

// Function to count the number of set bits in an integer
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {  // Check if the least significant bit is set
            count++;
        }
        num >>= 1;  // Right shift the number by 1 bit
    }
    return count;
}

// Function to find the total number of set bits in a given array
int totalSetBits(int arr[], int size) {
    int totalBits = 0,i;
    for ( i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = totalSetBits(arr, size);
    printf("Total number of set bits: %d\n", result);
    
    return 0;
}

