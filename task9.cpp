#include<stdio.h>
main()
{
	int n;
	int i=1;
	int j=1;
	printf("Enter the number for factorail ");
	scanf("%d",&n);
	while(i<=n)
	{
		j=j*i;
		i=i+1;
	}
	printf("The factorail of %d is %d",n,j);
}




