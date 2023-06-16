#include<stdio.h>
void findLagestSmallestDigit(int* num[])
{
	int smallDigit=9,largeDigit=0,i;
	
		int temp=num[i];
		while(temp>0)
		{
			int digit=temp%10;
			if(digit<smallDigit)
				smallDigit=digit;
			if(digit>largeDigit)
				largeDigit=digit;
			temp/=10;
		}
	printf("\nSmallest Digit=%d\n",smallDigit);
	printf("Largest Digit=%d\n",largeDigit);	
	}

int main()
{
	int n,i;
	printf("Enter number of inputs:");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{		
		printf("Enter number:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)	
	findLagestSmallestDigit(&num[i]);
	return 0;
}
