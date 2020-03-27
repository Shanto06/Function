#include<stdio.h>
double sqrt(double x)
{
    double y;
    y=x*x;
    return y;
}
int main()
{
    int p,c;
    scanf("%d",&p);
    c=sqrt(p);
    printf("The squre number %d\n",c);
    return 0;
}
