/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:36:18 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/12 20:47:45 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_index(t_list_int **stack, int diff)
{
	t_list_int	*element;
	int	min;

	element = stack[0];
	min = element->index;
	while (element->next)
	{
		element = element->next;
		if((element->index < min) && element->index != diff)
			min = element->index;
	}
	return (min);
}

void	ft_sort_2(t_list_int **stack_a)
{
	ft_swap_a(stack_a);
}

void	ft_sort_3(t_list_int **stack_a)
{
	t_list_int	*element;
	int	min;
	int	next_min;

	element = stack_a[0];
	min = find_min_index(stack_a, -1);
	next_min = find_min_index(stack_a, min);
	if (element->index == min && element->next->index != next_min)
	{
		ft_rotate_a(stack_a);
		ft_swap_a(stack_a);
		ft_reverse_rotate_a(stack_a);
	}
	else if (element->index == next_min)
	{
		if (element->next->index == min)
			ft_swap_a(stack_a);
		else
			ft_reverse_rotate_a(stack_a);
	}
	else
	{
		if (element->next->index == min)
			ft_rotate_a(stack_a);
		else
		{
			ft_swap_a(stack_a);
			ft_rotate_a(stack_a);
		}
	}
}
