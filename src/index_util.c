/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:35:48 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/12 10:14:51 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list_int	*find_next_min(t_list_int **list)
{
	t_list_int	*min;
	t_list_int	*tmp;

	min = list[0];
	tmp = list[0]->next;
	while (tmp != NULL)
	{
		if ((tmp->index == -1) && (tmp->value < min->value))
			min = tmp;
		tmp = tmp->next;
	}
	if (min->index != -1)
		return (NULL);
	return (min);
}

void ft_listint_indexation(t_list_int **list)
{
	int	index;
	t_list_int	*tmp;

	index = 0;
	tmp = find_next_min(list);
	while (tmp)
	{
		tmp->index = index;
		index++;
		tmp = find_next_min(list);
	}
}
