#include<stdio.h>

int calDiffOddEven(int *arr,int size)
{
	int sumEven=0,i;
	int sumOdd=0;
	int result;
	printf("Enter elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			sumEven+=arr[i];
		}	
		else{
			sumOdd+=arr[i];
		}
}
	if(sumOdd>sumEven)
		return sumOdd-sumEven;
	else
		return sumEven-sumOdd;
	
}

int main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	int arr[size];
	printf("Diffrence between odd and even numbers of array:%d",calDiffOddEven(arr,size));
	return 0;
}	
