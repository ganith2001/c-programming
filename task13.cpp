#include<stdio.h>
main()
{
	
	int n;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&num[i]);
	}
	for(int i=0;i<=n;i++)
	{   
	    int largest=num[i];
	    int smallest=num[i];
		if(num[i+1]>largest)
	    printf("largest= %d",num[i]);
		if(num[i+1]<smallest)
		printf("smallest= %d",num[i]);
    }
}
	
	    

