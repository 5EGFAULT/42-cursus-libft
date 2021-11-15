#include "libft.h"
#include <stdio.h>

int main ()
{

	printf("|%s|%s|%d|\n","abcdefgh","abcdwxyz",ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("|%s|%s|%d|\n","abcdefgh","abcdwxyz",strncmp("abcdefgh", "abcdwxyz", 4));

	return 0;
}

