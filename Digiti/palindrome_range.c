#include<stdio.h>
int palindrome(int num);
int main()
{
    int num,min,max;
    scanf("%d %d",&min,&max);
    for(num=min;num<=max;num++)
    {
        palindrome(num);
    }
}
int palindrome(int num)
{
    int re,sum=0,temp;
    temp=num;
    while(num>0)
    {
        re=num%10;
        sum=(sum*10)+re;
        num/=10;
    }
    if(temp==sum)
    {
        printf("%d ",sum);
    }
}