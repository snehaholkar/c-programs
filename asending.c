#include<stdio.h>
main()
{
int a[5],i,j,p;
printf("\n enter array elements");
for(i=0;i<=4;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<=4;j++)
{
	for(j=i+1;j<=4;j++)
	{
		if(a[i]>a[j])
		{
			p=a[i];
			a[i]=a[j];
			a[j]=p;
		}
	}
}
printf("\n ascending order: \n");
for(i=0;i<=4;i++)
{
	printf("\t%d",a[i]);

}
}
