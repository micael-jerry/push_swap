/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_int_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:49:12 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/12 10:59:45 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_list(t_list_int **list)
{
	t_list_int *element;
	t_list_int *tmp;

	element = list[0];
	while (element)
	{
		tmp = element;
		element = element->next;
		free(tmp);
	}
	free(list);
}

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
