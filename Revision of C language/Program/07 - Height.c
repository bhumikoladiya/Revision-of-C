#include<stdio.h>
main()
{
	float height;
	printf("Enter person's height in centimeter:");
	scanf("%f", &height);
	if(height<150)
	{
		printf("The person is short");
	}
	else if(height>150 && height<170)
	{
		printf("The person is average height");
	}
	else if(height>170)
	{
		printf("The person is tall");
	}
}
