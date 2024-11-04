#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	    t_list *new_list = NULL;
    t_list *new_node = NULL;
    t_list *current = NULL;

    while (lst)
    {
        // Allocate memory for the new node
        new_node = malloc(sizeof(t_list));
        if (new_node == NULL)
        {
            ft_lstclear(&new_list, del); // Free the new list if allocation fails
            return (NULL);
        }

        // Apply the function f to the content of the current node
        new_node->content = f(lst->content);
        if (new_node->content == NULL)
        {
            free(new_node); // Free the new node if f returns NULL
            ft_lstclear(&new_list, del); // Free the new list
            return (NULL);
        }

        new_node->next = NULL;

        // Add the new node to the new list
        if (new_list == NULL)
            new_list = new_node;
        else
            current->next = new_node;

        current = new_node;
        lst = lst->next;
    }

    return new_list;
}
