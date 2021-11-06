#include "libft.h"
#include <stdio.h>
#include <string.h>
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

printf("%s\n",ft_strchr("\0",'a'));
printf("%s",strchr("\0",'a'));
    return 0;
}
