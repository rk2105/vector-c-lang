#include<stdio.h>
#include<string.h>
int revs(char *ptr);
int main()
{
	char str[50];
	printf("Enter the string ");
	scanf("%[^\n]s",str);
	revs(str);
	printf("%s",str);
}
int revs(char *ptr)
{
	char *left,*right;
	left=ptr;
	right=ptr+strlen(ptr)-1;
	while(left<right)
	{
		if((*left)!=(*right))
		{
			char temp=*left;
			*left=*right;
			*right=temp;
		}
		left++;
		right--;
	}
}

