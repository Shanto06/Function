#include<stdio.h>

int res ,c;
int add(int a,int b)
{
    int res ;
    res=a+b;
    c=b;
    return res;
}

int abs(int a)
{
    int res;
    res<0 ? -a:a;
    c=a;
    return res;
}
int main()
{
    int p;
    p=add(5,6);

    printf("%d  %d\n",res,c);
    return 0;
}
