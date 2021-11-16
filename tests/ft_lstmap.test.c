#include "libft.h"
#include <stdio.h>

void *f(void *c)
{
	(void)c;
	return (ft_strdup("d2"));
}
void d(void *c)
{
	(void)c;
}
int main ()
{
	t_list	*d1 = ft_lstnew(ft_strdup("d1"));
	t_list	*dd1;
	t_list	*d2;

	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("d1")));
	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("d1")));
	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("d1")));
	ft_lstadd_back(&d1, ft_lstnew(ft_strdup("d1")));


	dd1 = d1;
	while (dd1)
	{
		printf("|%s|\n",dd1->content);
		dd1 = dd1->next;
	}
	d2 = ft_lstmap(d1, &f, &d);
	dd1 = d2;
	while (dd1)
	{
		printf("|%s|\n",dd1->content);
		dd1 = dd1->next;
	}
	return 0;
}

