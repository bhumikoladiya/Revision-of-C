#include<stdio.h>
main()
{
	int a[3][3]={2,5,6,8,4,1,9,6,3};
	int b[3][3]={5,6,4,1,7,8,5,1,2};
	int c[3][3];
	int row,col;
	printf ("\n---First Martix---\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ", a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n---Second Matrix---\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ", b[row][col]);
		}
		printf("\n");
	}
	
	printf("\n---Multipiaction Matrix\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]*b[row][col];
			printf(" %d ", c[row][col]);
		}
		printf("\n");
	}
}
