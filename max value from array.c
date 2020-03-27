#include<stdio.h>

int find_max(int arr[],int n)
{
    int i;
    int max=arr[0];
    for(i=0;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[6]={100,21,-45,93,67,83};
    int n=6,max;
    max=find_max(arr,n);
    printf("%d\n",max);
    return 0;
}
