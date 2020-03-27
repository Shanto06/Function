#include<stdio.h>

int add(int a,int b)
{
    extern int c;
    c=a+b;

    return a+b;
}

int c;

int main()
{


    int p;
    printf("%d\n",c);
    p=add(3,7);
     printf("%d\n",c);

}
