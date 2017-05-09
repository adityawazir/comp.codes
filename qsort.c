#include <stdio.h>
#include <stdlib.h>
int comp(const void *p1,const void *p2)	{
	return (*(int*)p1 < *(int*)p2);//ascending.....if(>)--->descending
}
int main()
{
	int a[3],t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<3;i++)
		{
			scanf("%d",&a[i]);
		}
		qsort(a,3,sizeof(int),comp);  //a---->refer to a[0]...(a+3---->a[3])..3--->refer to no. of blocks...sizeof(int)--->refer to int array.......comp--->complemnetary function
		 printf("Case %d: %d",t+1,a[1]);
	}
  
return 0;
}

