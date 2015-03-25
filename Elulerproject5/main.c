#include <stdio.h>

int divide(int a);
int main()
{
    int j=20;
    while(divide(j)!=0)
    {
        j++;
    }
    printf("Largest number is %d ",j);
    
}

int divide(int a)
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(a%i!=0)
        {
            return 1;
        }
    }
    //printf("True");
    return 0;
}

