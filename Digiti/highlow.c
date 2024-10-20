#include<stdio.h>
int highlow(int num);
int lowhigh(int num);
int main()
{
    int num,res1,res2;
    scanf("%d",&num);
    res1=highlow(num);
    printf("highest :%d\n",res1);
    res2=lowhigh(num);
    printf("lowest :%d\n",res2);
    if(res1==res2)
    printf("all digits are same");
    
}
int highlow(int num)
{
    int digit,high=1;
    while(num!=0)
    {
        digit=num%10;
        if(digit>high)
        {
            high=digit;
        }
        num=num/10;
    }
    //printf("highest :%d\n",high);
    return high;
}
int lowhigh(int num)
{
    int digit,low=9;
    while(num!=0)
    {
    digit=num%10;
    if(digit<=low)
    {
        low=digit;
    }
    num=num/10;
}
//printf("lowest :%d",low);
return low;
}