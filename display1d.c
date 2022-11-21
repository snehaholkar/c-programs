#include<stdio.h>
main()
{
	int a[5],i;
	printf("\n enter array elements");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n display elements:");
	for(i=0;i<=4;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
}
