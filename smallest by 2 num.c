#include<stdio.h>
int minimum(int a,int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
    }
    else
    {
        temp=b;
    }
    return temp;
}

int main()
{
    int x,y;
    int smallest;
    scanf("%d%d",&x,&y);
    smallest=minimum(x,y);
    printf("The smallest number %d\n",smallest);
    return 0;
}
