/*12. Design and develop a function rightrot(x, n) in C that returns the value of the integer x
rotated to the right by n bit positions as an unsigned integer. Invoke the function from the
main with different values for x and n and print the results with suitable headings.*/


#include<stdio.h>
int main ( )
{
	unsigned int ans,x,n;
	printf("enter x and n values\n");
	scanf("%d%d",&x,&n);
	ans=rightrot(x,n);
	printf("\nThe value after rotating %d bit is : ",n);
	printf("%d",ans);
	return 0;
}
int rightrot(unsigned int x,unsigned int n)
{
	if (n == 0)
		return x;
	else
	return ((x >> n) | (x << ( 32- n)));
}
