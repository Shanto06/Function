

///isprint,ispunct,isspace,iscntrl

///isalnum,isalpha,isdigit,islower,isupper

///toascii,tolower,toupper

/// is means cheak or to means change
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isprint(ch))
        printf("yes");
    else
        puts("no");
    return 0;
}
