#include "push_swap.h"

int	ft_is_sorted_list(t_list_int **list)
{
	t_list_int	*lst_element;

	if (ft_lstintsize(list[0]) <= 1)
		return (1);

	lst_element = list[0];
	while (lst_element)
	{
		if (lst_element->next)
			if (lst_element->value > lst_element->next->value)
				return (0);
		lst_element = lst_element->next;
	}
	return (1);
}
