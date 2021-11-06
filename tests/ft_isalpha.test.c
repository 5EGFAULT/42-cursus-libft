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

void     lower_letter(){
        if(ft_isalpha(102))
    {
        printSucess("lower_letter");
        return;
    }
    printERROR("lower_letter");
}
void     upper_letter(){
        if(ft_isalpha(102))
    {
        printSucess("upper_letter");
        return;
    }
    printERROR("upper_letter");
}
void     non_digit_letter(){
        if(ft_isalpha(99))
    {
        printERROR("non_digit_letter");
        return;
    }
    printSucess("non_digit_letter");
}

int     main()
{
    // lower_letter();
    // upper_letter();
    // non_digit_letter();
		int		i;
			i = -1;
			while (i < 530)
			{
				if (!!ft_isalpha(i) != !!isalpha(i))
                {
                    printf("%d        %d      %d",i,ft_isalpha(i),isalpha(i));    
                    printERROR("ft_isalpha failed");
                }
				i++;
			}
					printSucess("ft_isalpha Sucess");


    return 0;
}
