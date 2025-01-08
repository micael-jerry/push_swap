#include "push_swap.h"

int	ft_is_sorted(t_list_int **list)
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

int ft_is_duplicate(t_list_int **list)
{
	t_list_int *lst_element;
	t_list_int *tmp_el;

	if (ft_lstintsize(list[0]) <= 1)
		return (1);
	
	lst_element = list[0];
	while (lst_element)
	{
		tmp_el = lst_element->next;
		while (tmp_el)
		{
			if (lst_element->value == tmp_el->value)
				return (1);
			tmp_el = tmp_el->next;
		}
		lst_element = lst_element->next;
	}
	return (0);
}
