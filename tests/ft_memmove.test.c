#include "libft.h"
#include <stdio.h>

// // #define dst "hhhhhhhh"
// // #define src "hhhhhhhh"

// int main()
// {
// 	char *dst = "reda";
// 	 char *src = "ayoub";

// 	// char *a = NULL;
// 	// printf("\n%s\n", (char *)memmove(dst, ((void *)0), 5));
// 	// printf("\n%s\n", (char *)memmove(dst, src, 4 ));
// 	// printf("\n%s\n", (char *)ft_memmove(src, ((void *)0), 5));
// 	//  printf("\n%s\n",(char *)memcpy(dst,src,0));

// 	//printf("\n%s\n",(char *)ft_memcpy(dst,src,50));
// 	// printf("\n%s\n",(char *)ft_memcpy(NULL,"da daddad",0));

// 	return 0;
// }
// // gcc -fsanitize=address tests/ft_memcpy.test.c libft.a -I  ./

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "reda";
	const char src[] = "ayoub";

	//    printf("Before memmove dest = %s, src = %s\n", dest, src);

	//memmove(dest, NULL, 2);
	//   ft_memmove(NULL, NULL, 2);
	printf("dest = [%s]\n", dest);

	return (0);
}