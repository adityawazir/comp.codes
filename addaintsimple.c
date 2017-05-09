#include <stdio.h>
#include<string.h>

int main()
{
    int n,i,k,m;
    char str[100000],rstr[100000];
    scanf("%d",&n);
    while(n--)
    {
        m=0;
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        m++;
        for(i=0;i<m;i++)
       {
        rstr[i]=str[((m-1)-i)]; 
       }
    
        for(i=0;i<m;i++)
        {
        k=str[i]+rstr[i]-192;
        if(k>26)
        {
            k-=26;
        }
        k+=96;
        str[i]=k;
       }
       printf("%s\n",str);
    }
    
return 0;
}        
        

