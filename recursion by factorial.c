#include<stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int p,x;
    scanf("%d",&x);
    p=fact(x);
    printf("%d\n",p);
    return 0;
}
