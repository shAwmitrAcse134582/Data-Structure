#include <stdio.h>

int length=9;
int Heapsize=9;
int Left(int i)
{
    return i*2;
}
int Right(int i)
{
    return (i*2)+1;
}
void MaxHeapify(int a[],int i)
{
    int largest,temp;
    int l=Left(i);
    int r=Right(i);
    if(l<=Heapsize&&a[l]>a[i])
        largest=l;
    else
        largest=i;
    if(r<=Heapsize&&a[r]>a[largest])
        largest=r;
    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        MaxHeapify(a,largest);
    }
}
void BuildMaxHeap(int a[])
{
    int i;
    Heapsize=length;
    for(i=length/2;i>=1;i--)
    {
        MaxHeapify(a,i);
    }
}
void HeapSort(int a[])
{
    int i,temp;
    BuildMaxHeap(a);
    for(i=length;i>=2;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        Heapsize--;
        MaxHeapify(a,1);
    }
}
int main()
{
    int i,a[length+1];
    for(i=1;i<=length;i++)
    {
        scanf("%d",&a[i]);
    }
    HeapSort(a);
    for(i=1;i<=length;i++)
    {
        printf("%d ",a[i]);
    }
}
