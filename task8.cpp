#include<stdio.h>
main()
{
	int n;
	int i=1;
	int j=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(i<=10)
	{
		j=n*i;
		printf("\n%d X %d = %d",n,i,j);
		i=i+1;
	}
}

