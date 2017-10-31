#include <stdio.h>

int main()
{
    //add
    long int t,n,s,i;
    s=0;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            if(i%3==0)
            {
                s+=i;
            }
            else
            if(i%5==0)
            {
                s+=i;
            }
        }
        printf("%ld\n",s);
    }
}
