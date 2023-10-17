#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s%s",&a,&b);
    int ln_a=strlen(a),ln_b=strlen(b);
    printf("%d %d\n%s%s\n",ln_a,ln_b,a,b);

    char tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;
    printf("%s %s\n",a,b);
    
    return 0;
}