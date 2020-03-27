#include<stdio.h>
void fun(int *a)
{
     (*a)++;
}
int main()
{
    int a=5;
    printf("%d\n",a);
    fun(&a);
    printf("%d\n",a);
}
