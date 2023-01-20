#include <stdio.h>

void Merge(int a[],int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1],R[n2+1];
    for(i=1;i<=n1;i++)
    {
        L[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        R[j]=a[q+j];
    }
    L[n1+1]=1000000000;
    R[n2+1]=1000000000;
    i=1;
    j=1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}
void MergeSort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=((p+r)/2);
        MergeSort(a,p,q);
        MergeSort(a,q+1,r);
        Merge(a,p,q,r);
    }
}
int main()
{
    int a[10],i;
    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    MergeSort(a,1,9);
    for(i=1;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
