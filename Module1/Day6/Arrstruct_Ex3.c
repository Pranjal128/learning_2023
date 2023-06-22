#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[20];
	float marks;
};
typedef struct Student student;

void getStudentData(student*,int, char*,float);
void displayStudentData(student*);
void displayArray(student*,int);
void getArray(student*,int);

int main(){
	int size;
	printf("Entr the size of array:");
	scanf("%d",&size);
	student arr[size];
	getArray(arr,size);
    displayArray(arr,size);
	return 0;
}

void getStudentData(student* ptr,int r, char* n,float mar)
{
	ptr->rollno=r;
	strcpy(ptr->name,n);
	ptr->marks=mar;
}

void displayStudentData(student* ptr)
{
	printf("\n%d %s %f",ptr->rollno,ptr->name,ptr->marks);
}

void displayArray(student* ptr,int size)
{
	int i;
	printf("Displayed Data:\n");
	for(i=0;i<size;i++){
		displayStudentData(&ptr[i]);
	}
}
void getArray(student* ptr,int size)
{
	int i,r;
	char n[20];
	float m;
	printf("Enter Data:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d%s%f",&r,n,&m);
		getStudentData(&ptr[i],r,n,m);
	}
}
