#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int n;
	printf("Enter the main string ");
	gets(str1);
	printf("Enter the cmp string ");
	gets(str2);
	n=strcmp(str1, str2);
	printf("%d",n);
}
