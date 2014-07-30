/*14. Design, develop and execute a parallel program in C to determine and print the prime
numbers which are less than 100 making use of algorithm of the Sieve of Eratosthenes. */


#include<stdio.h>
#include<math.h>
#include<omp.h>
int main()
{
	int num[120], i, j,n;
	printf("enter the value of n\n”);
	scanf(“%d”,&n);
	#pragma omp parallel for
	for(i=0;i<=n;i++)
	{
		num[i]=i;
	}
	#pragma omp parallel for
	for(i=2;i<=sqrt(n);i++)
	{
		if(num[i]!=0)
		{
			#pragma omp parallel for
			for(j=(i*i);j<=n;j=j+i)
			{
				num[j]=0;
			}
		}	
	}
	#pragma omp parallel for
	printf(“The prime numbers that are less 100\n”);
	for(i=0;i<=n;i++)
	{
		if(num[i]!=0)
		printf("\nprimeno=%d threadID=%d\n",num[i],omp_get_thread_num());
	}
}
