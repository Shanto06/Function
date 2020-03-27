/*
create a function that count the number of
a char (given in input)in a string


        sample input        output
        shanto  a              1
        shanto  p               0

*/

/*
#include<stdio.h>
#include<string.h>
int count(char arr[],char ch)
{
    int ln,i,cnt=0;
    ln=strlen(arr);
    for(i=0;i<ln;i++)
    {
        if(arr[i]==ch)
            cnt++;
    }
    return cnt;
}

int main()
{
    char arr[100];
     char ch;
    gets(arr);//scanf("%s %c",arr,&ch);
                //scanf("%s%*c%c%*c",arr,&ch);
    scanf(" %c",&ch);

    printf("%d\n",count(arr,ch));
    return 0;
}
*/

#include<stdio.h>
int count(char arr[],char ch)
{
    int i,cnt=0;

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==ch)
            cnt++;
    }
    return cnt;
}

int main()
{
    char arr[100];
     char ch;
    gets(arr);//scanf("%s %c",arr,&ch);
                //scanf("%s%*c%c%*c",arr,&ch);
    scanf(" %c",&ch);

    printf("%d\n",count(arr,ch));
    return 0;
}
