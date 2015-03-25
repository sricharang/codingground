#include <stdio.h>

int squaresum(int n);
int sumsquare(int m);

int main()
{
    int a,b;
    printf("Enter a number ");
    scanf("%d",&a);
    b= sumsquare(a)-squaresum(a);
    printf("Required sum is %d ",b);
   
}
int squaresum(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum+=(i*i);
    }
    return sum;
}
int sumsquare(int m)
{
    int sum=0,i;
    for(i=1;i<=m;i++)
    {
        sum+=i;
    }
    return (sum*sum);
    
}

