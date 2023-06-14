#include<stdio.h>
int grtNo(int n1,int n2,int n3)
{
	if(n1>n2){
		if(n1>n3)
			return n1;
		else
			return n3;
	}
		else if(n2>n3)
			return n2;
		else
			return n3;
	

}

int main()
{
	int num1,num2,num3,res;
	printf("Enter 3 Numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("The gretest no.:%d",grtNo(num1,num2,num3));
	return 0;	
}
