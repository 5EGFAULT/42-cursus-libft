#include "libft.h"
#include <stdio.h>

#define dst "hhhhhhhh"
#define src "whycssssssssssss"

int main ()
{
	 char *a = NULL;
			// printf("\n%s\n",(char *)memcpy(dst,src,50));
			//  printf("\n%s\n",(char *)memcpy(dst,src,0));
	// ft_itoa(5);
	// ft_itoa(55);
	 a = ft_itoa(1234);
	printf("\n{%s}\n",a);
	// printf("\n{%d}\n",123/10);
	// ft_itoa(-5);
	// ft_itoa(-55);
	// ft_itoa(-555);
			//printf("\n%s\n",(char *)ft_memcpy(dst,src,50));
			// printf("\n%s\n",(char *)ft_memcpy(NULL,"da daddad",0));
return 0;
}

// gcc -fsanitize=address tests/ft_memcpy.test.c libft.a -I  ./