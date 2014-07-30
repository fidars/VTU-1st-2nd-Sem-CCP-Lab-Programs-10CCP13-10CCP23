/*15. Design and develop a function reverses(s) in C to reverse the string s in place. Invoke this
function from the main for different strings and print the original and reversed strings. */

#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
	char temp;
	int i,len;
	len = strlen(s)-1;
	for(i=0;i<strlen(s)/2;i++)
	{
		temp=s[i];
		s[i]=s[len];
		s[len]=temp;
		len--;
	}
	printf("the reversed string is = %s",s);
}
int main()
{
	char s[10];
	int i;
	printf("Enter String : ");
	scanf("%s",s);
	printf("the original string is=%s\n",s);
	reverse(s);
        return 0;
}
