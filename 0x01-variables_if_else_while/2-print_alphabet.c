#include<stdlib.h>
#include<stdio.h>

/**
	*	main	- the function main prints all alphabet
	*
	*
	*	Return:	Always	0	(Sucees)
	*/
int	main(void)
{
	int	n;

	for (n = 97; n <= 122; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return	(0);
}
