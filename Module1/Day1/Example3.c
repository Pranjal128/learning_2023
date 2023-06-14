#include<stdio.h>

int main()
{
	int rollNo;
	char name[20];
	int phy,maths,chem,total=0;
	float percent;
	printf("Enter Roll No.:");
	scanf("%d",&rollNo);
	printf("Enter Name:");
	scanf("%s",&name);
	printf("Enter Marks of Physics, Maths, Chemistry:");
	scanf("%d%d%d",&phy,&maths,&chem);
	total=phy+maths+chem;
	percent=((float)total/300)*100;
	printf("\nRoll No.:%d \nName:%s \nTotal Marks:%d \nPercentage:%f",rollNo,name,total,percent);
	return 0;
	
}
