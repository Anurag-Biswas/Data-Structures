#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,row,col,count=0;
	printf("Enter the number of rows and columns:")
	scanf("%d %d",&i, &j);
	if(i!=j)
	{
		printf("Rows are not equal to columns.Therefore non-symmetric matrix");
		exit(0);
	}
	int a[i][j],b[i][j];
	printf("\n Enter the matrix elemeents\n");
	for(row=0;row<i;row++)
	{
		for(col=0;col<j;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<i;row++)
	{
		for(col=0;col<j;col++)
		{
			b[row][col]=a[row][col];
		}
	}
	for(row=0;row<i;row++)
	{
		for(col=0;col<j;col++)
		{
			if(a[row][col]!=b[row][col])
			{
				count++;
				break;
			}
		}
	}
	if(count==0)
	{
		printf("\n The given matrix is a symmetric matrix");
	}
	else
	{
		printf("\n The given matrix is not a symmetric matrix");
	}
	return 0;
}
