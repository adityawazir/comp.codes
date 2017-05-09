#include <stdio.h>
int isprime(int a)
{
    inti,count=2;
    for(i=2;i*i<=N;i++)
    {
        if(a%i==0)
        {
            if(i*i==a)
            count++
            else
            count+=2;
        }
    }
    if(count==2)
    return 1;
    else 
    return 0;
}


int main()
{
    int i,j,k,b,c,d;
    char s[1000];
    int T,N;
    scanf("%d",&t);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        scamf("%s",s);
        for(j=0;j<N;j++)
        {
            k=s[j];
            if(isprime(k)==1)
            s[j]=k;
            else
            if(k%2!=0)
            {
                for(d=1;d<40;d++)
                b=k-(2*d);
                c=k+(2*d);
                if((b>=65)&&(b<=90)||(b>=98)&&(b<=123))
                {
                    if(isprime(b)==1)
                    {
                        s[j]==b;
                        break;
                    }
                }
                else
                 if((c>=65)&&(c<=90)||(c>=98)&&(c<=123))
                {
                    if(isprime(c)==1)
                    {
                        s[j]==c;
                        break;
                    }
                }
            
        }
        else
        if(k%2==0)
            {
                for(d=1;d<40;d++)
                b=k-((2*d)+1);
                c=k+((2*d)+1);
                if((b>=65)&&(b<=90)||(b>=98)&&(b<=123))
                {
                    if(isprime(b)==1)
                    {
                        s[j]==b;
                        break;
                    }
                }
                else
                 if((c>=65)&&(c<=90)||(c>=98)&&(c<=123))
                {
                    if(isprime(c)==1)
                    {
                        s[j]==c;
                        break;
                    }
                }
            }
        }
     printf("%s",s);   
    }
    return 0;
}

