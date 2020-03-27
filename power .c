#include<stdio.h>
#include<string.h>
int pow(int a,int b)
{
    int i,mult=1;
    for(i=1;i<=b;i++)
    {
        mult = mult*a;
    }
    return mult;

}
int main()
{
    int d,x,y;
    scanf("%d%d",&x,&y);
    d=pow(x,y);
    printf("%d\n",d);

    return 0;
}
