#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,n,flag;
    char a[1001],b[1001];
    scanf("%d",&n);
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[j]==b[i])
            {
                char t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    flag=strcmp(a,b);
    if(flag==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}
