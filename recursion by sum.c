#include<stdio.h>

int sum (int n)
{
    return (n*(n+1)/2);
}
int main()
{
    int x,p;
    scanf("%d",&x);
    printf("%d\n",sum(x));
    return 0;
}
