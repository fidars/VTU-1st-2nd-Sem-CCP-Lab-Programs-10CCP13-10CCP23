/* 3. Design, develop and execute a program in C to reverse a given four digit integer number
and check whether it is a palindrome or not. Output the given number with suitable
message.*/

#include <stdio.h>
void main()
{
	int n,rev=0,rem,a;
	printf("Enter a number : ");
	scanf("%d",&n);
	a = n;
	if(n<=999 || n>9999)					//condition to check if it is not a 4 digit no
	{
		printf(" Not a 4 digit number\n");
		exit(0);
	}
	while(n != 0)
	{
		rem=n%10;
		rev= rev*10+rem;
		n = n / 10;
	}
	if(a==rev)
		printf("\n The given Number %d is Palindrome",a);
	else
	printf("\n The given Number %d is not Palindrome",a);
}
