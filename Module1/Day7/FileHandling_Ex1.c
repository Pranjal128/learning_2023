#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE* fin,*fout;
	fin=fopen("read.txt","r");
	fout=fopen("write.txt","w+");
	if(NULL ==fin)
	{
		printf("File not exist!");
		return 2;
	}
	else
	{
		size_t maxlen=100;
		char* ptr=(char*)calloc(maxlen,sizeof(char));
		while(getline(&ptr,&maxlen,fin)!=-1)
		{
			fprintf(fout,"%s",ptr);
		}
		free(ptr);
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
