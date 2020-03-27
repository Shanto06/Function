#include<stdio.h>
#include<string.h>
int print(int a,int b)
{
    //printf("%d\n",a+b);
    //int d;
    //d=a+b;
    return a+b;
}
int main()
{
    int x,y,c;
    scanf("%d%d",&x,&y);
    c=print(x,y);
    printf("%d\n",c);


    return 0;
}
