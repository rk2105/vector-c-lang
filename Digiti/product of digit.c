#include<stdio.h>
int main()
{
    int num,digit,prod=1;
    scanf("%d",&num);
    if (num==0)
    printf("0");
    else
    {
    while(num!=0)
    {
        digit=num%10;
        prod=digit*prod;
        num=num/10;
    }
    printf("%d",prod);
    }
}