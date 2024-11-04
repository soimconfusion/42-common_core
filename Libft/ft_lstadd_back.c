#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	list_t	*last;
	
	if (new == NULL || lst == NULL)
		return (NULL);
	if (*lst == NULL)
	{
		*lst = new;
		return (NULL);
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
