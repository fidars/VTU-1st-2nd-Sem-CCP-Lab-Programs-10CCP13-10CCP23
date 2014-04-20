/*Design, develop and execute a program in C to implement Euclid’s algorithm to find the
GCD and LCM of two integers and to output the results along with the given integers. */

#include<stdio.h>
void main()
{
	int m,n,p,q,gcd,lcm,rem;
	printf("Enter two numbers : ");
	scanf("%d%d",&m,&n);					//input
	p = m;
	q = n;
	while(n!=0)
	{
		rem=m%n;
		m=n;
		n=rem;
	}
	gcd = m;
	lcm = (p * q) / gcd;
	printf("\n The LCM of %d and %d = %d",p,q,lcm);			//LCM
	printf("\n The GCD of %d and %d = %d",p,q,gcd);			//GCD
}
