#include<stdio.h>

int main()
{
	int percent;
	printf("Enter Percentage:");
	scanf("%d",&percent);
	if(percent>=90 && percent<=100){
		printf("Grade A\n");
	}
	else if(percent>=75 && percent<=89){
		printf("Grade B\n");
	}
	else if(percent>=60 && percent<=74){
		printf("Grade C\n");
	}
	else if(percent>=50 && percent<=59){
		printf("Grade D\n");
	}
	else{
		printf("Grade F\n");
	}
	return 0;
}
