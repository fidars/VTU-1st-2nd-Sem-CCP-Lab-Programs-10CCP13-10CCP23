/*8. Design, develop and execute a program in C to compute and print the word length on the
host machine. */


#include<stdio.h>
int main()
{
	int var = -1,wordlen=0;
	while (var)
	{
		wordlen++;
		var <<= 1;
	}
	printf(" The Word length of this Host Machine is %d Bits", wordlen);
	return 0;
}

