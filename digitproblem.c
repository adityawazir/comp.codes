#include <stdio.h>

int main()
{
    long long int x;
    int k,i,n,j;
    n=1;
    int a[100000];
    scanf("%lld",&x);
    scanf("%d",&k);
    for(i=x;(x/10)!=0;x=x/10)
    {
        n++;
        printf("%d",n);
    }
    for(;k>0;k=k/10)
    {
        a[i]=k%10;
        
    }
    j=n-1;
    for(i=0;i<k;)
    {
        
     if(a[j]!=9)
       {
           a[j]=9;
           k++;
           j--;
        }
        else
        {
            j--;
        }
    }
    for(i=n-1;i>=0;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
