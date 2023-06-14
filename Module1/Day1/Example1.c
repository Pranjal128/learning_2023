#include<stdio.h>

int FindGreatest(int number1,int number2)
{
	if(number1>number2)
		return number1;
	else
		return number2;
}
void grtNoTernary(int num1,int num2)
{
	(num1>num2) ? printf("%d\n",num1):printf("%d\n",num2);
}
int main()
{
	int input1,input2,grtno=0;
	printf("Enter two numbers:");
	scanf("%d%d",&input1,&input2);
	printf("%d\n",FindGreatest(input1,input2));
	grtNoTernary(input1,input2);
	return 0;
}
