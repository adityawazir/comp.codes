#include <stdio.h>
int main()
{
	int a[3];t;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<3;i++)
		{
			scanf("%d ",&a[i]);
		}
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				if(a[i]>a[j])
				{
					int u=a[j];
					a[j]=a[i];
					a[i]=t;
				}
			}
		}
		printf("Case %d: %d",t,a[1]);
	}
  
return 0;
}
