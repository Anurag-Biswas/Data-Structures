#include<stdio.h>
int main()
{
	int rows,cols;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of columns:");
	scanf("%d",&cols);
	int matrix[rows][cols];
	printf("Enter the elements of the matrix:\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	int nonzerocount=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(matrix[i][j]!=0)
			{
				nonzerocount++;
			}
		}
	}
	int SparseMatrix[nonzerocount+1][3];
	SparseMatrix[0][0]=rows;
	SparseMatrix[0][1]=cols;
	SparseMatrix[0][2]=nonzerocount;
	int SparseRow=1;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(matrix[i][j]!=0)
			{
				SparseMatrix[SparseRow][0]=1;
				SparseMatrix[SparseRow][1]=j;
				SparseMatrix[SparseRow][2]=matrix[i][j];
				SparseRow++;
			}
		}
	}
	printf("\nSparse Matrix representation:\n");
	for(int i=0;i<=nonzerocount;i++)
	{
		printf("%d %d %d\n", SparseMatrix[i][0],SparseMatrix[i][1],SparseMatrix[i][2]);
	}
	return 0;
}

