#include <stdio.h>

int palin(int a);

int main()
{
    int i,j,b,max=0;
    for(i=1;i<=999;i++)
    {
        for(j=999;j>=1;j--)
        {
            b=i*j;
            if(palin(b)==0 && max<b)
            {
                max=b;
            }
        }
    }
    printf("Maximum palindrome is %d ",max);
    

    return 0;
}

int palin(int a)
{
    int rev=0;
    int temp=a;
    while(temp!=0)
    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }
    if (rev==a)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

