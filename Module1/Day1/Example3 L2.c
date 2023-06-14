#include<stdio.h>

int Find_vowel(char *ch)
{
	switch(*ch){
		case 'a':
			return 1;	break;
		case 'e':
			return 1;	break;
		case 'i':
			return 1;	break;
		case 'o':
			return 1;	break;
		case 'u':
			return 1;	break;
		case 'A':
			return 1;	break;
		case 'E':
			return 1;	break;
		case 'I':
			return 1;	break;
		case 'O':
			return 1;	break;
		case 'U':
			return 1;	break;
		default:
			return 0;			
	}
}
int main()
{
	char ch;
	printf("Enter the charecter:");
	scanf("%c",&ch);
	if(Find_vowel(&ch))
	{
		printf("Vowel");
	}
	else
	{
		printf("Not Vowel");
	}
	
}
