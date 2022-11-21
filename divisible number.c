#include<stdio.h>
main()
{
	int i,num;
	printf("enter the last number:");
	scanf("%d",&num);
	printf("numbers divisible by 3 and 5  ");
	for(i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
		printf("%d",i);
		}
}

