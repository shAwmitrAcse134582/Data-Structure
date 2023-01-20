#include <stdio.h> //class 2 in a little bit hurry to use function

int main()
{
    int t,test,ir;
    freopen("countingSort.txt","r",stdin);
    freopen("countingout.txt","w",stdout);
    scanf("%d",&test);
    for(ir=1;ir<=test;ir++)
    {
    scanf("%d",&t);
    int a[t+1],k=a[1],j,i, b[t+1];
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a[i]);
        if(k<a[i])
        {
            k=a[i];
        }
    }
    int c[k];
    for(i=0;i<=k;i++)
    {
        c[i]=0;
    }
    for(j=1;j<=t;j++)
    {
        c[a[j]]=c[a[j]]+1;
    }
    for(i=1;i<=k;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(i=t;i>0;i--)
    {
        b[c[a[i]]]=a[i];
        c[a[i]]=c[a[i]]-1;
    }
    for(i=1;i<=t;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    }
    return 0;
}
