#includeM<stdio.h>
void fact(int n);
main()
{
	int i, n,fact=n;
	printf("\n enter n= ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial =%d",fact);
}
