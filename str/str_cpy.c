#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],sub[10];
	char *temp;
	printf("Enter the main string ");
	scanf("%[^\n]s",str);
//	printf("ENter the to copy string ");
//	scanf("%[^\n]s",sub);
	temp=strcpy(sub,str);
	//printf("%s",temp);
	puts(temp);
}
