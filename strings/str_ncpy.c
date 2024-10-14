#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
	char str[20],sub[15];
	printf("Enter the main string ");
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	int len;
	printf("Enter how many chars do you want to cpy to sub string  ");
	scanf("%d",&len);
	strncpy(sub,str,len);
	sub[len]='\0';
	printf("%s",sub);
}
