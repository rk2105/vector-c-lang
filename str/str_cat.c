#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
	char str[40],sub[20];
	printf("ENter the main string ");
	scanf("%[^\n]s",str);
	__fpurge(stdin);
	printf("Enter the sub string ");
	scanf("%[^\n]s",sub);
	strcat(str,sub);
	printf("%s",str);
}
