/*10. Design, develop and execute a program in C to read two matrices A (M x N) and B (P x Q)
and to compute the product of A and B if the matrices are compatible for multiplication.
The program is to print the input matrices and the resultant matrix with suitable headings
and format if the matrices are compatible for multiplication, otherwise the program must
print a suitable message.(For the purpose of demonstration, the array sizes M, N, P, and Q
can all be less than or equal to 3)*/



#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,p,q,i,j,k;
	printf("\n Enter the order of the matrix A :");
	scanf("%d%d",&m,&n);
	printf("\n Enter the order of the matrix B :");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
		printf("\n Enter the elements of matrix A \n");
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
			scanf("%d",&a[i][j]);
		}
		printf("\n Enter the elements of matrix B \n");
		for(i = 0 ; i < p ; i++)
		{
			for(j = 0 ; j < q ; j++)
			scanf("%d",&b[i][j]);
		}
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				c[i][j]=0;
				for(k = 0 ; k < n ; k++)
				c[i][j] += a[i][k] * b[k][j];
			}
		}
		printf("\n MATRIX A \n");
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				printf(" %d \t", a[i][j]);
			}
			printf("\n");
		}	
		printf("\n MATRIX B \n");
		for(i = 0 ; i < p ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				printf(" %d \t", b[i][j]);
			}
			printf("\n");
		}
		printf("\n MATRIX C \n");
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				printf(" %d \t", c[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("Matrix A & B is not multiplicable");

	return 0;
}
