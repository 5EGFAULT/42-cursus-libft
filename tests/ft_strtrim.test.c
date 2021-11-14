
#include "libft.h"
#include <stdio.h>
#include <ctype.h> 

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
// #define TRIM_SET_PLACEHOLDER " \n\t"
#define TRIM_SET_PLACEHOLDER "ayoubrr"

void    printERROR(char * msg)
{
    printf("%s",KRED);
    printf("[KO]\t%s\n",msg);
    printf("\033[0m");
}
void    printSucess(char * msg)
{
    printf("%s",KGRN);
    printf("[OK]\t%s\n",msg);
    printf("\033[0m");
}

// int		start_index(char *s1, char const *set);

int     main()
{
// 			char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 			char	*s2 = "Hello \t  Please\n Trim me !";

// 			char	*ret = ft_strtrim(s1, TRIM_SET_PLACEHOLDER);
// // if (!strcmp(ret, s2))
// //            					printSucess("ft_strtrim Sucess");
// // else
// //                     printERROR("ft_strtrim failed");

//     printf("|%s|\n",s2);
//     printf("|%s|",ret);

    		// 	char	*s1 = "ayoubrr";
			// char	*s2 = "ayoub";

			// // char	*ret = ft_strtrim(s1, TRIM_SET_PLACEHOLDER);
			// char	*ret = ft_strtrim(s1, NULL);
// if (!strcmp(ret, s2))
//            					printSucess("ft_strtrim Sucess");
// else
//                     printERROR("ft_strtrim failed");

    // printf("|%s|\n",ret);
    // printf("|%s|",s2);
    // printf("%d",start_index("ayoub","ay"));
     printf("|%s|%s|%s|\n","abcde", "aeb",ft_strtrim("abcde", "aeb"));
     printf("|%s|%s|%s|\n","121552125512", "12",ft_strtrim("121552125512", "12"));
     printf("|%s|%s|%s|\n","", "12",ft_strtrim("", "12"));

    // ft_strtrim("", "abe");
    return 0;
}