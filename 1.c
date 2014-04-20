/*1. 1. Design, develop and execute a program in C to find and output all the roots of a given
quadratic equation, for non-zero coefficients. */

#include <stdio.h>					//standard input output header used by printf & scanf
#include <math.h>					//used for mathematical functions like fabs()
void main()
{
	int a,b,c;
	float d,x1,x2,r;
	printf("Enter the three co-efficient :\n");
	scanf("%d%d%d",&a,&b,&c);		//%d is used for integers and %f is used for floating point numbers
	if (a* b* c == 0)
	{
		printf("\n Invalid Input ");
	}
	else
	{
		d = b * b - 4 * a * c;
		r=sqrt(fabs(d));			//fabs calculates the absolute value of a floating point number
		if (d > 0)					//condition to check for positive numbers
		{
			x1 = (-b +r) / (2.0*a);
			x2 = (-b -r) / (2.0*a);
			printf("\n The roots are real and distinct\n");
			printf("\n The roots are \n 1) x1=%f\t\t \n 2) x2=%f",x1,x2);
		}
		else if (d == 0)			//condition to check for equal numbers
		{
			x1 = x2 = -b/(2.0*a);
			printf("\n The roots are real and equal\n");
			printf("\n The roots are: \n 1) x1=x2=%f",x1);
		}
		else						//all the remaining numbers are checked here including imaginary numbers
		{
			x1 = -b / (2.0 * a);
			x2 = r / (2.0*a);
			printf("\n The roots are real and imaginary\n");
			printf("\n The roots are:\n 1) %f +i %f \t\t\n 2) %f –i %f ",x1,x2,x1,x2);
		}
	}
}
