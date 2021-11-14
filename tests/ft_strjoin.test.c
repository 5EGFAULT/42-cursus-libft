
#include "libft.h"
#include <stdio.h>
#include <ctype.h> 

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"

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


int     main()
{

    char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);

if (!strcmp(res, "my favorite animal is the nyancat"))
           					printSucess("ft_strjoin Sucess");
else
                    printERROR("ft_strjoin failed");




    return 0;
}