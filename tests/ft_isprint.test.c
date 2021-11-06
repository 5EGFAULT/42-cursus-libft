
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
		int		i;
			i = -1;
			while (i < 530)
			{
				if (!!ft_isprint(i) != !!isprint(i))
                {
                    printf("%d        %d      %d",i,ft_isprint(i),isprint(i));    
                    printERROR("ft_isprint failed");
                }
				i++;
			}
					printSucess("ft_isprint Sucess");


    return 0;
}