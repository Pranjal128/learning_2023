#include<stdio.h>
//To accept elements of array
void acceptEle(int* arr,int size)
{
	int i;
	printf("Enter the elements of arrary:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}

//to find Maximum and Minumum Number
int findMaxMin(int* arr,int size){
	int i;
	int maxNum=arr[0],minNum=arr[0];
	for(i=1;i<size;i++){		//intilized i=1
		if(maxNum<arr[i])
			maxNum=arr[i];
		if(minNum>arr[i])
			minNum=arr[i];
}
	printf("%d %d",minNum,maxNum);
}

int main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	acceptEle(arr,size);
	findMaxMin(arr, size);
	return 0;
}
