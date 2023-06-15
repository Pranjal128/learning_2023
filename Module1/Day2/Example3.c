#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the size of Array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemets of an array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i+=2){
        sum+=a[i];
    }
    printf("Sum of alternate elemets: %d",sum);
    return 0;
}
