#include<stdio.h>
#define MAX 10
// Structure to represent a non-zero element in the sparse matrix
struct SparseMatrix{
	int row; // Row index of the non-zero element
	int col;// Column index of the non-zero element
	int val;// Value of the non-zero element
};

int main()
{
	// 2D array to store the input matrix
	int matrix[MAX][MAX],sparse[MAX],i,j,rows,cols,nonZero=0;
	// Array to store non-zero elements
	struct SparseMatrix sparseArr[MAX * MAX];
	
	// Get the dimensions of the matrix from the user
	printf("enter the number of rows and columns of the matrix:");
	scanf("%d%d",&rows,&cols);
	
	 // Input the elements of the matrix
	printf("enter he elements of the matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&matrix[i][i]);
		// If the element is non-zero, store it in the sparse array
			if(matrix[i][i]!=0)
			{
				sparseArr[nonZero].row=i;
				sparseArr[nonZero].col=j;
				sparseArr[nonZero].val=matrix[i][j];
				nonZero++;
			}
		}
	}
	    // Print the sparse matrix representation
	printf("\nSparse matrix representation(Row,Column,Value):\n");
	for(i=0;i<nonZero;i++)
	{
		printf("%d\t%d\t\n",sparseArr[i].row,sparseArr[i].col,
		sparseArr[i].val
		);
		
	}
	return 0;
}
