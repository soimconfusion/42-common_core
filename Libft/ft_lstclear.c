#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	tmp;

	if (lst == NULL || del == NULL || *lst == NULL)
		return;
	while (*lst)
	{
		tmp = (*lst)->next;
		dt_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}