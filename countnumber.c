#include <stdio.h>

int main()
{
    int i,t,n,j,k,flag;
    static int count;
    flag=1;
    flag=0;
    char s[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",s);
        for(j=0;j<n;j++)
        {
           
            k=s[j];
            while((k>=49)&&(k<=58))
            {
                j++;
                k=s[j];
                flag=1;
            }
            if(flag==1)
            count++;
            flag=0;
        }
        printf("%d\n",count);
    }
}

