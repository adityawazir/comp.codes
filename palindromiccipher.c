#include <stdio.h>
#include <string.h>
int main()
{
    char s[10];
    int d[10],p,q;
    int t,n,i,mid;
    p=1;
    q=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        n=strlen(s);
        for(i=0;s[i]!='\0';i++)
        {
            d[i]=s[i]-96;
        }
        if(n%2==0)
        {
            mid=(n-2)/2;
            for(i=0;i<=mid;i++)
            {
                p*=d[i];
            }
            for(i=mid+1;i<n;i++)
            {
                q*=d[i];
            }
            if(p==q)
            {
                printf("Palindrome\n");
            }
            else
            printf("%d\n",p*q);
        }
        else
        {
            mid=n/2;
            for(i=0;i<=mid;i++)
            {
                p*=d[i];
            }
            for(i=mid;i<n;i++)
            {
                q*=d[i];
            }
            if(p==q)
            {
                printf("Palindrome\n");
            }
            else
            printf("%d\n",((p*q)/d[mid]));
            
        }
    }
  return 0; 
}