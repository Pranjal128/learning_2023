#include<stdio.h>
struct parametersofbox{
	int length,weight,height,volume,area;
};
typedef struct parametersofbox parameters;
void calAreaandVolume(parameters *ptr)
{
	ptr->area=2* (ptr->length * ptr->height+ ptr->length * ptr->weight+ ptr->weight * ptr->height);
	ptr->volume=(ptr->length)* (ptr->weight )* (ptr->height);
	printf("Area of Surface=%d \nVolunme=%d",ptr->area,ptr->volume);
}

int main()
{
	parameters p1;
	parameters *ptr=&p1;
	printf("Enter the l,w,h:");
	scanf("%d%d%d",&ptr->length,&ptr->weight,&ptr->height);
	calAreaandVolume(ptr);
	return 0;
}
