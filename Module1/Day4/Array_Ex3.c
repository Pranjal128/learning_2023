#include<stdio.h>
void revarray(int* arr,int size){
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size],i;
	printf("Enetr the elements od an array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	revarray(arr,size);
	return 0;
}

