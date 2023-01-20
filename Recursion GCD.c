#include <stdio.h>

int GCD(int a,int b)
{
    if(b!=0)
        return GCD(b,a%b);
    else
        return a;
}
int main()
{
    int a,b,gcd;
    scanf("%d",&a);
    scanf("%d",&b);
    gcd=GCD(a,b);
    printf("%d",gcd);
    return 0;
}
