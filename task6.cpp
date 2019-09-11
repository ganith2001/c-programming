#include<stdio.h>
main()
{
	int n;
	int rem=0;
	int count=0;
	int q=0;
	int t,e,i;
	int result=1;
	printf("Enter the number ");
	scanf("%d",&n);
	t=n;
	e=n;
	while(n>0)	
	{
		rem=n%10;
		count=count+1;
		n=n-rem;
		n=n/10;
	}
	while(t>0)
	{
		rem=t%10;
		result=1;
		for(i=1;i<=count;i++)
		{
		result=result*rem;
	    }
		q=q+result;
		t=t-rem;
		t=t/10;
	}
	if(e==q)
	{
	printf("It is armstrong number");
    }
	else
	{
	printf("It is not armstrong number");
    }
}








