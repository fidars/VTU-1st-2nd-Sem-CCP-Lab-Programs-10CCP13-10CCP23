/* 5. Design, develop and execute a program in C to copy its input to its output, replacing each
string of one or more blanks by a single blank.*/



#include <stdio.h>
#include<string.h>
void main()
{
	char c[50];
	int i;
	printf("Enter the text");
	scanf("%c", c);
	for(i=0;c[i]!='\0';i++)
	{
		if (c[i]==' ')
		printf("%c", c[i]);
		while (c[i]==' ')
			i++;
		printf("%c", c[i]);
	}
}
