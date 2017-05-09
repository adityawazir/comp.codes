#include <stdio.h>
int main()
{
    int a,t,i,s;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        a=0;
        scanf("%d",&n);
        for(i=5;i<=n;i+=5)
        {
            s=i;
            while(s%5==0)
            {
                    a++;
                    s=s/5;
            }
            
        }
        printf("%d",a);
    }
 return 0;
}