#include <stdio.h>
int main()
{
    int t,i,m;
    t=0;
    long long int ali[100000],bob[100000],j,n;
   
    scanf("%d",&t);
    while(t--)
    {
        
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&bob[j]);
    
        }
        for(j=0;j<n;j++)
        {
            scanf("%lld",&ali[j]);
        }
        t=ali[0];m=bob[0];
        for(j=1;j<n;j++)
        {
            if(ali[j]>t)
            t=ali[j];
            if(bob[j]>m)
            m=bob[j];
        }
        if(t>m)
        {
        printf("Alice\n");
        continue;
        }
        else
        if(t<m)
        {
        printf("Bob\n");
        continue;
            
        }
        
        else 
        {
        printf("Tie\n");
        continue;
        }
    }

    return 0;
}

