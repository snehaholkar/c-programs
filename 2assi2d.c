#include<stdio.h>
main()
{
	static int a[10][10];
	int i,j,m,n,sum=0;
	printf("\n enter the order of the matrix");
	scanf("%d%d",&m,&n);
	printf("\n enter the number of the matrix");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			sum=sum+a[i][j];
		}
		printf("\n sum of the %d row is=%d",i,sum);
		sum=0;
		for(j=0;j<n;++j);
		{
			for(i=0;i<m;i++)
			{
				sum=sum+a[i][j];
			}
			printf("\n sum of the %d column is=%d",j,sum);
			sum=0;
		}
	}
}
