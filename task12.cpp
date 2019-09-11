#include<stdio.h>
main()
{
	int n;
	int F;
	int c;
	printf("1.Celcius to Farenhiet");
	printf("2.Farenheit to Celcius");
	printf("3.exit");
	printf("Enter the number");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("Enter the celcius");
		        scanf("%d",&c);
		        F=32+c*9/5;
				printf("Farenheit value is %d",F) ;
				break; 
		case 2:     printf("Enter the fareinheit");
		                 scanf("%d",&F);
				c=5*(F-32)/9;
				printf("Celcius value is %d",c);
				break;
		case 3: exit(0);
	}
}
