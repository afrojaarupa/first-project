#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int op_1=a*b+c;
    int op_2=a*b-c;
    int op_3=a+b-c;
    int op_4=a+b*c;
    int op_5=a-b+c;
    int op_6=a-b*c;
    if(op_1==d || op_2==d || op_3==d || op_4==d || op_5==d || op_6==d)
    {   
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}