#include <stdio.h>
int main()
{
     long long int n,a,b,c,i;
    a=0;
    b=0;
    c=0;
    int *ptr;
    scanf("%lld",&n);
    ptr=(int*) calloc(n,sizeof(long long int));
    if(ptr==NULL)
    {
        exit(0);
    }
    
    for(i=0;i<n;i++)
    {
        scanf("%lld",ptr+i);
        if(i%3==1)
        a+=*(ptr+i);
        else
        if(i%3==2)
        b+=*(ptr+i);
        else
        c+=*(ptr+i);
        
    }
    printf("%lld %lld %lld",c,a,b);
    return 0;
}

