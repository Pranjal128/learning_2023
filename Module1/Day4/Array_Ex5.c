#include<stdio.h>
int calDiffEvenOddIndex(int size)
{
	int arr[size],i;
	int sumEveninx=0,sumOddinx=0;
	
	printf("Enter Elements of array:");
	for(i=0;i<size;i++)	
	{
		scanf("%d",&arr[i]);
		if(i%2==0)
			sumEveninx+=arr[i];
		else
			sumOddinx+=arr[i];
	}
	if(sumOddinx>sumEveninx)
		return sumOddinx-sumEveninx;
	else
		return sumEveninx-sumOddinx;
}


int main()
{
	int size;
	printf("Entr size:");
	scanf("%d",&size);
	printf("Differce between Odd and Even index is %d",calDiffEvenOddIndex(size));
	return 0;
}
