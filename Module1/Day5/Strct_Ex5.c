#include<stdio.h>
struct swapData{
	int num1,num2;
};
typedef struct swapData swap;

int main()
{
	swap var1,var2,temp;
	printf("Enter the 2 valuesfor structure variable1:");
	scanf("%d%d",&var1.num1,&var1.num2);
	printf("Enter the 2 valuesfor structure variable2:");
	scanf("%d%d",&var2.num1,&var2.num2);
	printf("\nNumbers before swapping\n");
	printf("Stucture variable1:%d\t%d  \nStucture variable2:%d \t%d\n",var1.num1,var1.num2,var2.num1,var2.num2);
	temp=var1;
	var1=var2;
	var2=temp;
	printf("\nNumbers after swapping");
	printf("\nStucture variable1:%d \t%d  \nStucture variable2:%d \t%d",var1.num1,var1.num2,var2.num1,var2.num2);
	return 0;		
}
