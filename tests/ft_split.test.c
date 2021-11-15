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

// char	**empty_2d_array(char *s,char c)
// {
// 	int i;
// 	int len2;
// 	char **splited;

// 	i = -1;
// 	len2 = 0;
// 	while (s[++i])
// 	{
// 		if (s[i] == c && s[i+1] != c && s[i+1] != '\0')
// 			len2++;
// 	}
// 	if (len2 == 0)
// 		return (0);
// 	printf("|%d|\n",len2);
// 	splited = (char **)malloc((len2 + 1) * sizeof(char *));
// 	return (0);
// }
int     main()
{
    // lower_letter();
    // upper_letter();
    // non_digit_letter();
		// int		i;
		// 	i = -1;
		// 	while (i < 530)
		// 	{
		// 		if (!!ft_isalpha(i) != !!isalpha(i))
        //         {
        //             printf("%d        %d      %d",i,ft_isalpha(i),isalpha(i));    
        //             printERROR("ft_isalpha failed");
        //         }
		// 		i++;
		// 	}
		// 			printSucess("ft_isalpha Sucess");

// empty_2d_array("   my name is   ",' ');

    char **s;
    char *ss = " 1 2 3 4 5 6 7 8 9";
    int i;
    i = -1;
    s = ft_split(ss,' ');
    while (s && s[++i])
    {
        printf("|%s|\n",s[i]);
    }
    			// while (s[i] != NULL)
			// {
			// 	printSucess(s[i]);
			// 	i++;
			// }
    return 0;
}
