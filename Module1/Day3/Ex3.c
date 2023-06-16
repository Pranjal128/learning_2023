/*#include<stdio.h>
int findLargest(int num)
{
	int temp=num,i,j;
	int largestNum=0;
	int reduceNum=0;
	for(i=0;i<4;i++)
	{
		int divisor=1;
		
		for(j=0;j<4;j++){
			if(j!=i){
				reduceNum=reduceNum*10+(temp/divisor)%10;
				divisor*=10;
			}
		}
	}
	return reduceNum;
}

int main()
{
	int num;
	printf("Enter 4 Digit number:");
	scanf("%d",&num);
	if(num<1000 || num>9999)
		printf("Please enter the valid input(4-digit number)");
	
	printf("Largest number=%d",findLargest(num));
	return 0;
}

#include <stdio.h>

int findLargestNumber(int num) {
    int largestNum = 0;
    int temp = num;
	int i,j;
    // Iterate over each digit of the number
    for (i = 0; i < 4; i++) {
        int divisor = 1;
        int reducedNum = 0;

        // Reduce the number by deleting the i-th digit
        for ( j = 0; j < 4; j++) {
            if (j != i) {
                reducedNum = reducedNum * 10 + (temp / divisor) % 10;
                divisor *= 10;
            }
        }

        // Update the largest number if the reduced number is larger
        if (reducedNum > largestNum) {
            largestNum = reducedNum;
        }
    }

    return largestNum;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input. Please enter a 4-digit number.\n");
        return 0;
    }

    int largestNumber = findLargestNumber(num);

    printf("The largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}
*/

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
