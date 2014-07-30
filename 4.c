/*4. Design, develop and execute a program in C to evaluate the given polynomial
f(x) = (a^4)(x^4) + (a^3)(x^3) + (a^2)(x^2) + (a^1)(x^1) + (a^0) for given value of x and 
the coefficients using Horner’s method. */



#include <stdio.h>
int main()
{
	int n,i,x,a[10],poly=0;
	printf("\n Enter the degree of the polynomial : ");
	scanf("%d",&n);
	printf("\n Enter the %d coefficients\n",n+1);
	for(i = 0 ; i <= n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the value of x :");
	scanf("%d",&x);
	poly=a[0];
	for(i = 1 ; i <= n ; i++)
	{
		poly = poly* x+a[i];
	}
	printf("\n The sum of polynomial = %d",poly);

	return 0;
}
