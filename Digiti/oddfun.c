#include<stdio.h>
void odd(int num);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    odd(num);
}
void odd(int num)
{
    int re,odd,count=0;
    if(num==0)
    printf("you have supplied zero");
    if(num<0)
    {num=-num;}
    while(num>0)
    {
        re=num%10;
        if(!(re%2)==0)
        {
            count++;
            printf("%d ",re);
        }
            else if(count==0)
            {
            printf("no odd digits");
            break;
            }
        num=num/10;
    }
    
}