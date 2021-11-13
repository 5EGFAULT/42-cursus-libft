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

// #include <stdio.h>
// #include <string.h>
#include <limits.h>
int main()
{
	// char dest[] = "reda";
	// const char src[] = "ayoub";

	//    printf("Before memmove dest = %s, src = %s\n", dest, src);


	// size_t nb = -9223372036854775810;
	//  printf("============> %d\n", 	INT_MIN);
	//  printf("============> %d\n", INT_MAX);

	// long nb = 9223372036854775806;

	// nb = nb -1;
	// printf("=====> %d\n", (int)nb);
	//memmove(dest, NULL, 2);
	//   ft_memmove(NULL, NULL, 2);
	// printf("dest = [%s]\n", dest);
	printf("==== > [%d]\n", atoi("2147483648"));
	printf("==== > [%d]\n", ft_atoi("2147483648"));

	//* OVERFLOW*/
	// 2147483648 >> -2147483648 >> sign * -2147483648 >> 2147483648 >> -2147483648

	return (0);
}