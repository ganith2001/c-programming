#include<stdio.h>
main()
{
	int n,t;
	int rem=0;
	int rev=0;
	printf("Enter the number");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n-rem;
		n=n/10;
	}
	if(t=rev)
	{
	printf("The number is palendrom");
    }
	else
	{
	printf("The number is not palendrom");
    }  
	}

