#include <stdio.h>
int main()
{
    int a,t,s;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        a=0;
        scanf("%d",&n);
        s=5;
        while(s<=n)
        {
            a+=(n/s);
            s=s*5;
        }
        printf("%d\n",a);
    }
    return 0;    
}