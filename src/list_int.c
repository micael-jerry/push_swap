#include "push_swap.h"

t_list_int	*ft_lstintnew(int value)
{
	t_list_int	*new;

	new = (t_list_int *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_list_int	*ft_lstintlast(t_list_int *lst_one)
{
	if (!lst_one)
		return (NULL);
	while (lst_one->next)
		lst_one = lst_one->next;
	return (lst_one);
}

void	ft_lstintadd_front(t_list_int **lst, t_list_int *new)
{
	new->next = lst[0];
	lst[0] = new;
}

void	ft_lstintadd_back(t_list_int **lst, t_list_int *new)
{
	t_list_int	*actual_last_element;

	if (!lst[0])
	{
		lst[0] = new;
		return ;
	}
	actual_last_element = ft_lstintlast(lst[0]);
	actual_last_element->next = new;
}

int		ft_lstintsize(t_list_int *lst_one)
{
	int	i;

	if (!lst_one)
		return (0);
	i = 1;
	while (lst_one->next)
	{
		lst_one = lst_one->next;
		i++;
	}
	return (i);
}
