#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void
*))
{
	if (del == NULL || lst == NULL)
		return;
	(*del)(lst->content);
	free(lst);
}
