#include <stdio.h>

int main()
{
    char s[100];
    int a,i,b;
    scanf("%s",&s); 
    for(i=41;s[i]!='\0';i++)
    {
        if(s[i]=='=')
        {
            printf(': ');
        }
        else
        if(s[i]=='&')
        {
            printf("\n");
        }
        else
        printf("%c",s[i]);
    }
    return 0;
}
