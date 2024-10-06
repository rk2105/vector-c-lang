#include<stdio.h>
#include<string.h>
char *revfun(char *ptr);
int main()
{
	int len, count=0;
	char str[160], sub[50];
	char *rev=NULL, *ptr=NULL; 
        char *token;
	printf("Enter the main string ");
	gets(str);
	printf("Enter the sub string ");
	gets(sub);
	char dlim[]=" ";
	rev=revfun(sub);
	ptr=str;
	ptr=strstr(ptr,sub);
	strncpy(ptr,rev,strlen(rev));
	len=strlen(sub);
	while(ptr=strstr(ptr,sub))
	{
		count++;
		if(count==1)
		{
			memmove(ptr,ptr+len,strlen(ptr+len)+1);
		}
		if(count!=1)
		{
			memset(ptr,'*',len);
		}
		ptr++;
	}
	//puts(str);
	token=strtok(str,dlim);
	while(token != NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL,dlim);
	}
}
char *revfun(char *ptr)
{
	int j=strlen(ptr)-1;
	int i=0;
	static char rev[20];
	while(j>=0)
	{
		rev[i]=ptr[j];
		i++;
		j--;
	}
	rev[i]='\0';
	return rev;
}
