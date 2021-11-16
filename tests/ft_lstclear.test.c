#include "libft.h"
#include <stdio.h>

void *f(void *c)
{
	(void)c;
	return (ft_strdup("d2"));
}
void d(void *c)
{
	free(c);
}
int main()
{
	t_list	*d1 = ft_lstnew(ft_strdup("0"));
	t_list	*dd1;

	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("1")));
	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("3")));
	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("4")));


	dd1 = d1;
	while (dd1)
	{
		// printf("|%s|\n",dd1->content);
		dd1 = dd1->next;
	}
	ft_lstclear(&d1, &d);
	dd1 = d1;
	while (dd1)
	{
		printf("|%s|\n",dd1->content);
		dd1 = dd1->next;
	}
	return (0);
}
