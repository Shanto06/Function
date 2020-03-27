#include<stdio.h>

int sum(int a,int b)
{
    int add;
    add=a+b;
    return add;
}
int main()
{
    int x,y,c;
    scanf("%d%d",&x,&y);
    c=sum(x,y);
    printf("The sum %d\n",c);
    return 0;
}
