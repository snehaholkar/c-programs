#include<stdio.h>
main()
{
	int a[5],i;
	printf("\n enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("\n %d",a[i]);//reverse order print
	}
}
