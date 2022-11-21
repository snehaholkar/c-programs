#include<stdio.h>
main()
{
	int i,j,k,N;
	
	printf("enter N:");
	scanf("%d",&N);
	k=1;
	for(i=0;j<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k % 2==1)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
			k++;
		}
		printf("\n");
	}
}
