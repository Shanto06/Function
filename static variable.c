#include<stdio.h>
int add()
{
    static int n=0;
    n++;
    return n;
}
int main()
{

    printf("%d\n",add());
    printf("%d\n",add());
    printf("%d\n",add());
    printf("%d\n",add());
}
