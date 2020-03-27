#include<stdio.h>
double pi=3.14;
void my_fn()
{
    pi=3.1416;
}

int main()
{
    printf("%lf\n",pi);
    my_fn();
    printf("%lf\n",pi);

    return 0;
}
