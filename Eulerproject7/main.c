#include <stdio.h>



int main()
{
    int n,a=1,i,cnt1=0,cnt2=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(cnt2<n)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                cnt1++;
            }
            
        }
        if(cnt1==2)
        {
            cnt2++;
            //printf("%d ",a);
        }
        cnt1=0;
        
        a++;
    }
   printf("%d th prime number is %d \n",n,a-1);
}
