/* 9. Design, develop and execute a program in C to calculate the approximate value of exp (0.5)
using the Taylor Series expansion for the exponential function. Use the terms in the
expansion until the last term is less than the machine epsilon defines as FLT_EPSILON in the
header file <float.h>. Print the value returned by the Mathematical function exp ( ) also.*/


#include<stdio.h>
#include <float.h>
#include <math.h>
int main()
{
	int i;
	float x,sum,fact,term;
	printf("\nYou have this series : 1+x/1!+x^2/2!+ x^3/3! + x^4/4!+……………….x^n/n!");
	printf("\n\nEnter the value for X : ");
	scanf("%f",&x);
	sum = 0;
	term = 1;
	fact = 1;
	for(i=1;term >= FLT_EPSILON;i++)
	{
		fact =fact * i;
		sum = sum + term;
		term = pow(x,i)/fact;
	}
	printf("\n\nThe Calculated value of e^% .3f = %f",x,sum);
	printf("\n\nThe Library Function Value of e^%.3f = %f",x,exp(x));

	return 0;
}
