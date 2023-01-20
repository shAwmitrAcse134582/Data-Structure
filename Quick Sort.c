#include <stdio.h>


int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int Partition(int A[],int p,int r)
{
    int x,i,j,temp;
    x=A[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(A[j]<=x)
        {
            i++;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[i+1],&A[r]);
    return i+1;
}

int QuickSort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=Partition(A,p,r);
        QuickSort(A,p,q-1);
        QuickSort(A,q+1,r);
    }
}

int main()
{
    int A[10],i;
    for(i=1;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    QuickSort(A,1,9);
    for(i=1;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
