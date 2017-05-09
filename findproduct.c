int main()
{   int n,a[1000],i;
    long long int ans;
    ans=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    ans=(ans*a[i])%(1000000000+7);
    }     
    printf("%lld",ans);
    return 0;
}

