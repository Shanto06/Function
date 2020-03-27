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
    int x,y,z;
    int t1,t2;
    scanf("%d%d%d",&x,&y,&z);
    t1=minimum(x,y);
    t2=minimum(t1,z);
    printf("The smallest number %d\n",t2);
    return 0;
}
