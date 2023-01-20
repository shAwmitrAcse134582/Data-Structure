#include <stdio.h>

int BigMod(int a,int p,int q)
{
    int x;
    if(p==1)
        return a;
    if(p%2==0)
    {
        x=BigMod(a,p/2,q)%q;
        return(x*x)%q;
    }
    else
    {
        return((a%q)*(BigMod(a,p-1,q)%q))%q;
    }
}
int main()
{
    int a,p,q,mod;
    a=3;
    p=11;
    q=7;
    mod=BigMod(a,p,q);
    printf("%d",mod);
}
