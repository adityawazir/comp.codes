#include <stdio.h>

int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!='/0';i++)
    {
        if((s[i]>=65)&&(s[i]<=90))
           {
            s[i]+=33;
            }
         else 
           {
            s[i]-=33;
           } 
    }
    printf("%s",s);
    return 0;
}
