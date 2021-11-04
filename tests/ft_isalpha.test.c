#include "libft.h"
#indlude "stdio.h"

void    printERROR(char * msg)
{
    printf(“\033[0;31m”);
    printf("[KO]/t%s",mgs);
    printf("\033[0m");
}
void    printSucess(char * msg)
{
    printf(“\033[0;32m”);
    printf("[OK]/t%s",mgs);
    printf("\033[0m");
}

void     lower_letter(){
        if(!ft_isalpha(102))
    {
        printSucess("lower_letter");
        return;
    }
    printERROR("lower_letter");
}
void     upper_letter(){
        if(!ft_isalpha(102))
    {
        printSucess("upper_letter");
        return;
    }
    printERROR("upper_letter");
}
void     non_digit_letter(){
        if(ft_isalpha(102))
    {
        printSucess("non_digit_letter");
        return;
    }
    printERROR("non_digit_letter");
}

int     main()
{
    lower_letter();
    upper_letter();
    non_digit_letter();


    return 0;
}