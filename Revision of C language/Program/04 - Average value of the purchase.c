#include<stdio.h>
main()
{
	float a, b, weight1, weight2, purchase1, purchase2, ave;
	printf("Enter item's weight of a:");
	scanf("%f", &weight1);
	printf("Enter a number of purchase of a:");
	scanf("%f", &purchase1);
	printf("Enter item's weight of b:");
	scanf("%f", &weight2);
	printf("Enter a number of purchase of b:");
	scanf("%f", &purchase2);
	ave=((weight1*purchase1)+(weight2*purchase2))/2;
	printf("Average value of the purchase: %f", ave);
	
	
}
