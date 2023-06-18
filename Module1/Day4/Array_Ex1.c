#include<stdio.h>
calSumandAvrgArr(int* arr,int size)
{
	int i,sum=0;
	float average;
	printf("Enter the elements of arrary:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	average=(float)sum/size;	printf("Sum of elements:%d\nAverage=%f",sum,average);
	return 0;
	
	
}


int main()
{
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	calSumandAvrgArr(arr,size);
	return 0;
}
