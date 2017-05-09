#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i,j,n,c;
    scanf ("%s",a);
    n=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        
        c=0;
        for(j=i+1;(j<i+6)&&(i+5<n);j++)
        {
            if(a[i]==a[j])
            {
                c++;
                printf("%d",c);
            }
            else
            {
                i=j;
                break;
            }
            if(c==5)
            {
                printf("Sorry,sorry!");
                return 0;
            }
        }
    }
    printf("Good Luck!");
    return 0;
}    
