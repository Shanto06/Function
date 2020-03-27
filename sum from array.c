#include<stdio.h>

int find_sum(int arr[],int n)
{
    int sum=0,i;
    for(i=0;i<6;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={19,100,-199,34,534,85};
    int x=6;
    int sum;
    sum=find_sum(arr,x);
    printf("%d\n",sum);
    return 0;

}
