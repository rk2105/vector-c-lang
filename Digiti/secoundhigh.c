#include<stdio.h>
int secondhigh(int num);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    secondhigh(num);
}
int secondhigh(int num)
{
    int re,high=0,shigh=0,count=0;
    if(num<0)
        num=-num;
        if(num==0)
        {
        printf("you have supplied single digit only");
        
        return 0;        
        }
    while(num>0)
    {
        re=num%10;
        if(re>high)
        {
            shigh=high;
            high=re;
        }
        else if((re>shigh)&&(re!=high))
        {
            shigh=re;
        }
        num=num/10;
        count++;
    }
    if((count!=1)&&(shigh!=0))
    printf("%d",shigh);
    
   if(count==1)
   {
    printf("you have supplied single digit only");
    
    return 0;
   }
    if((shigh==0)&&(count>1))
    {
    printf("all digits are same");
    
    return 0;
    }
}