#include<stdio.h>
int find_min(int arr[],int n)
{
    int i;
    int min=arr[0];
    for(i=0;i<6;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[6]={19,100,-199,34,534,85};
    int x=6;
    int min;
    min=find_min(arr,x);

    printf("%d\n",min);
    return 0;
}
