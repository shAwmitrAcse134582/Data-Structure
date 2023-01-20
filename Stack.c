#include <stdio.h>

int s[100],top;

int stackempty(int s[])
{
    if(top==0)
        return 1;
    else
        return 0;
}

void printstack (int s[])
{
    int i;
    for(i=1;i<=top;i++)
    {
        printf("%d ",s[i]);
    }
}

int puss(int s[],int a)
{
    top++;
    if(top>=100)
    {
        printf("Over Flow");
    }
    else
    {
        s[top]=a;
    }
}

int pop(int s[])
{
    int z=stackempty(s);
    if(z==1)
    {
        printf("Under Flow");
    }
    else
    {
        top--;
    }
    return s[top+1];
}

int main()
{
    int s[100],top=0;
    puss(s,15);
    puss(s,15);
    puss(s,15);
    puss(s,15);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    printstack(s);
}
