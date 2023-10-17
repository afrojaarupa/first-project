#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int Ar[n];
    

    for(int i=0;i<n;i++)
    {
        scanf("%d",&Ar[i]);
        if(Ar[i]<=10)
        {
            printf("A[%d] = %d\n",i,Ar[i]);
        }

    }
    return 0;
}