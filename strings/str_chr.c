#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
	char str[40],ch;
	char *ptr=NULL;
	printf("Enter the main string ");
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	printf("Enter char to search ");
	scanf("%c",&ch);
	ptr=str;
	ptr=strchr(str,ch);
	if(ptr==NULL)
		printf("NULL");
	else
	printf("%ld",ptr-str);
}
