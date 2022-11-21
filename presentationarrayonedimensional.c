#include<stdio.h>
main()
{
	int i;
	//declaring and initialising array
	int arr[6]={2,4,6,8,10,12};
	
	for(i=0;i<6;i++)
	{
		//accessing each variable using for loop
		printf("\n value of arr[%d] is %d ",i,arr[i]);
	}
}

