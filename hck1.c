#include <stdio.h>

int main()
{
 unsigned int T;
 long long int a;
 long long int b;
 long long int ksj;
 scanf("%u",&T);
 for(int i=1;i<=T;i++)
 {
      scanf("%lld %lld %lld",&a,&b,&k);
     if(a+b==k)
     {
         printf("YES\n");
         break;
     }
    for(int n=1;;n++)
    {
        if((a+b+(2*n))==k)
       { printf("YES\n");
        break;}
        else
        if((a+b+(2*n))>k){printf("NO");
        
        break;
    }


       
    }
     
 }
 return 0;  
}
