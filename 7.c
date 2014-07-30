/* 7. Design, develop and execute a program in C to input N integer numbers into a single
dimension array, sort them in to ascending order using bubble sort technique, and then to
print both the given array and the sorted array with suitable headings.*/


#include <stdio.h>
int main()
{
	int n,i,j,a[10],b[10],temp;
	printf("\n Enter the no. of elements : ");
	scanf("%d",&n);
	printf("\n Enter %d elements ",n);	
	for(i = 0 ; i < n ; i++)
	{	
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i = 0 ; i < n-1 ; i++)
	{
		for(j = 0 ; j < n-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n The original elements are\n ");
	for(i = 0 ; i < n ; i++)
	printf("%d \n",b[i]);
	printf("\n The Sorted elements are ");
	for(i = 0 ; i < n ; i++)
	printf("%d \n",a[i]);
	
	return 0;
}
