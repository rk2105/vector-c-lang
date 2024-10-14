#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
	char str[10],sub[5];
	char*temp;
	printf("Enter the main string ");
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	printf("Enter the sub string ");
	scanf("%[^\n]s",sub);
	temp=strstr(str,sub);
	printf("%s",temp);
}
