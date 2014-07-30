/*13. Design and develop a function isprime(x) that accepts an integer argument and returns 1 if
the argument is prime and 0 otherwise. The function is to use plain division checking
approach to determine if a given number is prime. Invoke this function from the main with
different values obtained from the user and print appropriate messages. */

#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
		if(n%i ==0)
			return 0;
	return 1;
}
int main()
{
	int n,p;
	printf("enter the no\n");
	scanf("%d",&n);
	p=prime(n);
	if(p==1)
		printf("The given no is prime\n");
	else
		printf("The given no is not prime\n");
        return 0;
}
