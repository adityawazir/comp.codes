#include <stdio.h>

int main()
{
    int t,flag,i,j,k;
    flag=0;
    char a[4][4];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    for(i=0;i+2<4;i++)
    {
        for(j=0;j+2<4;j++)
        {
            if (a[i][j]=='x')
            {
                if ((a[i+1][j]=='x')&&(a[i+2][j]=='.')||(a[i+1][j]=='.')&&(a[i+2][j]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                else
                if ((a[i][j+1]=='x')&&(a[i][j+2]=='.')||(a[i][j+1]=='.')&&(a[i][j+2]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                else
                if ((a[i+1][j+1]=='x')&&(a[i+2][j+2]=='.')||(a[i+1][j+1]=='.')&&(a[i+2][j+2]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                
            }
            
            if (a[i][j]=='.')
            {
                if ((a[i+1][j]=='x')&&(a[i+2][j]=='x')||(a[i+1][j]=='x')&&(a[i+2][j]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                else
                if ((a[i][j+1]=='x')&&(a[i][j+2]=='x')||(a[i][j+1]=='x')&&(a[i][j+2]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                else
                if ((a[i+1][j+1]=='x')&&(a[i+2][j+2]=='x')||(a[i+1][j+1]=='x')&&(a[i+2][j+2]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                
            }
        }
    }
    for(i=0;i>=2;i++)
    {
        for(j=0;j>=2;j++)
        {
            if (a[i][j]=='x')
            {
                if ((a[i-1][j]=='x')&&(a[i-2][j]=='.')||(a[i-1][j]=='.')&&(a[i-2][j]=='x'))
                {
                  
                    flag=1;
                    continue;
                }
                else
                if ((a[i][j-1]=='x')&&(a[i][j-2]=='.')||(a[i][j-1]=='.')&&(a[i][j-2]=='x'))
                {
                   
                    flag=1;
                    continue;
                }
                else
                if ((a[i-1][j-1]=='x')&&(a[i-2][j-2]=='.')||(a[i-1][j-1]=='.')&&(a[i-2][j-2]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                
            }
            else
             if (a[i][j]=='.')
            {
                if ((a[i-1][j]=='x')&&(a[i-2][j]=='x')||(a[i-1][j]=='x')&&(a[i-2][j]=='x'))
                {
                  
                    flag=1;
                    continue;
                }
                else
                if ((a[i][j-1]=='x')&&(a[i][j-2]=='x')||(a[i][j-1]=='x')&&(a[i][j-2]=='x'))
                {
                   
                    flag=1;
                    continue;
                }
                else
                if ((a[i-1][j-1]=='x')&&(a[i-2][j-2]=='x')||(a[i-1][j-1]=='x')&&(a[i-2][j-2]=='x'))
                {
                    
                    flag=1;
                    continue;
                }
                
            }
           
        }
    }
     if(flag==0)
     printf("NO\n");
     else
     printf("YES\n");
    }
    return 0;
}

