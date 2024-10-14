#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],sub[20];
	printf("Enter the main string ");
	gets(str);
	char *ptr=str;
	memmove(ptr,ptr+3,strlen(ptr+3)+1);
	puts(str);
}
