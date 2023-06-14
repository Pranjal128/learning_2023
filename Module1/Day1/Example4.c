#include<stdio.h>

int main()
{
	int operand1,operand2,result;
	float res;
	char op;
		printf("Enter an operator(+,-,*,/):");
	scanf("%c",&op);
	printf("Enter number1:");
	scanf("%d",&operand1);

	printf("Enter number2:");
	scanf("%d",&operand2);
	switch(op){
		case '+':	printf("%d %c %d= %d",operand1,op,operand2,operand1+operand2);		break;
		case '-':	printf("%d %c %d =%d",operand1,op,operand2,operand1-operand2);		break;
		case '*':	printf("%d %c %d= %d",operand1,op,operand2,operand1*operand2);		break;
		case '/':	printf("%d %c %d= %f",operand1,op,operand2,(float)operand1/(float)operand2);	break;
		default:	printf("Please enter valid input\n");
			
	}
	return 0;
}
