/*16. Design and develop a function matchany (s1,s2) which returns the first location in the string
s1 where any character from the string s2 occurs, or – 1 if s1 contains no character from s2.
Do not use the standard library function which does a similar job! Invoke the function
matchany (s1. s2) from the main for different strings and print both the strings and the
return value from the function matchany (s1, s2). */

#include <stdio.h>
#include <string.h>
int matchany(char s1[ ], char s2[ ]);
int main()
{
	char str1[20],str2[20];
	int x;
	printf("\nEnter first String:");
	scanf("%s",str1);
	printf("\nEnter second String:");
	scanf("%s",str2);
	x=matchany(str1,str2);
	if(x==-1)
		printf("No character matching\n");
	else
		printf("The position is %d and character is %c\n",x+1,str1[x]);
	return 0;
}
int matchany(char s1[10], char s2[10])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0';j++)
		{
			if(s1[i] == s2[j])
			return i;
		}
	}
	return -1;
}
