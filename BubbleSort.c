#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);
    int A[n];
    //input section
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n-1; i++)
    {
        {
            for(j=0; j<n-1; j++)
            {
                if(A[j]>A[j+1])
                {
                    int temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }

}
