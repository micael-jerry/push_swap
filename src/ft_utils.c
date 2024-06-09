#include "push_swap.h"

int	ft_is_sorted_list(t_list **list)
{
	t_list	*lst_element;

	if (ft_lstsize(list[0]) <= 1)
		return (1);

	lst_element = list[0];
	while (lst_element)
	{
		if (lst_element->next)
			if (*((int *) lst_element->content) > *((int *) lst_element->next->content))
				return (0);
		lst_element = lst_element->next;
	}
	return (1);
}
