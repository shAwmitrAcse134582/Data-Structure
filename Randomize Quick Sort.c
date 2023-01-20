#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

int Randomize_Partition(int A[],int p,int r)
{
    int i,temp;
    srand(time(NULL));
    i=(rand()%(r-p+1))+p;
    swap(&A[i],&A[r]);
    return Partition(A,p,r);
}

int Randomize_QuickSort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=Randomize_Partition(A,p,r);
        Randomize_QuickSort(A,p,q-1);
        Randomize_QuickSort(A,q+1,r);
    }
}

int main()
{
    int A[10],i;
    for(i=1;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    Randomize_QuickSort(A,1,9);
    for(i=1;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
