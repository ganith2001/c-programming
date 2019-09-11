
#include<Stdio.h>
main()
{
	int a,b,c;
	int sum=0;
	float avg=0.0;
	printf("Enter the first subject");
	scanf("%d",&a);
	printf("Enter the second subject");
	scanf("%d",&b);
	printf("Enter the third subject");
	scanf("%d",&c);
	sum=a+b+c;
	avg=sum/3;
	printf("The sum of three subjects is %d",sum);
	printf("\nThe average of marks is %f",avg);
}

