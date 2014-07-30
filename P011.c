/*11. Design, develop and execute a parallel program in C to add, element-wise, two one dimensional
arrays A and B of N integer elements and to store the result in another one dimensional
array C of N integer element.*/

#include<stdio.h>
#include<omp.h>
int main()
{
	int i,j,k,n,a[10],b[10],c[10];
	printf("enter the size of an arrays\n");
	scanf("%d",&n);
	printf("enter array elements of A\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter array elements of B\n");
	for(j=0;j<n;j++)
		scanf("%d",&b[j]);
	#pragma omp parallel for
	for(i=0;i<n;i++)
	{
		c[i]= a[i]+b[i];
		printf ("c[%d]=%d,threadno=%d\n",i,c[i],omp_get_thread_num);
	}

	return 0;
}
