#include <stdio.h>

int factorialbByRecurrsion(int fac)
{
    if(fac!=0)
        return fac*factorialbByRecurrsion(fac-1);
    else
        return 1;
}

int factorial(int fac)
{
    int product=1,i;
    for(i=fac;i>=1;i--)
    {
        product=product*i;
    }
    return product;
}

int main()
{
    int fac1,fac2;
    fac1=factorial(5);
    fac2=factorialbByRecurrsion(5);
    printf("%d\n%d",fac1,fac2);
}
