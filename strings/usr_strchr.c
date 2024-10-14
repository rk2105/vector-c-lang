#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
char *_mystrchr(char *ptr,char ch);
int main()
{
	char str[20],ch;
	printf("Enter the string ");
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	char *ptr=str;
	printf("Enter char to search in string ");
	scanf("%c",&ch);
	ptr=_mystrchr(ptr,ch);
	if(ptr==NULL)
	{
		printf("Not Found");
	}
	else
	{
		printf("Found at %ld",ptr-str);
	}
}
char *_mystrchr(char *ptr,char ch)
{
	while((*ptr)!='\0')
	{
		if((*ptr)==ch)
		{
			return ptr;
		}
		ptr++;
	}
	return NULL;
}
