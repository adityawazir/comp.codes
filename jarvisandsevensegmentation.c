
       for(i=0;i<n;i++)
       {
           b[i]=0;
           scanf("%lld",&a[i]);
           for(j=a[i];j>0;j/=10)
           {
               K=j%10;
               if((K==2)||(K==3)||(K==5))
               b[i]+=5;
               else
               if(K==1)
               b[i]+=2;
               else
               if(K==4)
               b[i]+=4;
               else
               if((K==6)||(K==9)||(K==0))
               b[i]+=6;
               else
               if(K==7)
               b[i]+=3;
               else
               if(K==8)
               b[i]+=7;
           }
       }
       for(i=0;i<n;i++)
       {
           flag=0;
           for(j=0;j<n;j++)
           {
               if(b[i]<=b[j])
               flag++;
           }
        if(flag==n)
        {
            printf("%d\n",a[i]);
            break;
        }
       
       
       }
   }
}

