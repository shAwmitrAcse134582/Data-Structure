#include <stdio.h>

int HoarePartition(int a[],int p,int r)
{
    int temp;
    int x=a[p];
    int i=p-1;
    int j=r+1;
    while(1)
    {
        do
        {
            j--;
        }
        while(a[j]>x);
        do
        {
            i++;
        }
        while(a[i]<x);
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            return j;
        }
    }
}

void QuickSort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=HoarePartition(a,p,r);
        QuickSort(a,p,q);
        QuickSort(a,q+1,r);
    }
}

int main()
{
    int i,a[10];
    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    QuickSort(a,1,9);
    for(i=1;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
