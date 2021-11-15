#include "libft.h"
#include <stdio.h>

int main ()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	strsub = ft_substr(str, 400, 20);
	printf("|%s|%s|\n",str,strsub);
	return 0;
}

