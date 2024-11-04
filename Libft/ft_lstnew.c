#include "libft.h"

//create new node, value: content

t_list *ft_lstnew(void *content)
{
	t_list *link;
	link = (t_list *)malloc(sizeof(t_list));
	if (!link)
		return (NULL);
	link->content = (void *)content;
	link->next = NULL;
	return (link);
}
