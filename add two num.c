#include<stdio.h>

double add(double a, double b);

int main()
{


    printf("%lf\n", add(7.5,9.5));

    return 0;
}

double add(double a, double b)
{
    double sum;
    sum = a+b;
    return sum;
}
