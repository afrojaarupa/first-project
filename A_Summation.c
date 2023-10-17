#include<stdio.h>
int main()
{
    long long int n;
    long long int sum=0;
    scanf("%lld",&n);
    int ar[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
        sum=sum+ar[i];
    }

    if(sum<0)
    {
        printf("%lld",(sum*-1));
    }
    else
    {
        printf("%lld",sum);

    }
    return 0;

    }
   

    

