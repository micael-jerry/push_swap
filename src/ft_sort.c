/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:36:18 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/12 16:27:57 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2(t_list_int **stack_a)
{
	ft_swap_a(stack_a);
}

void	ft_sort_3(t_list_int **stack_a)
{
	t_list_int	*element;

	element = stack_a[0];
	if (element->index == 0 && element->next->index != 1)
	{
		ft_rotate_a(stack_a);
		ft_swap_a(stack_a);
		ft_reverse_rotate_a(stack_a);
	}
	else if (element->index == 1)
	{
		if (element->next->index == 0)
			ft_swap_a(stack_a);
		else
			ft_reverse_rotate_a(stack_a);
	}
	else
	{
		if (element->next->index == 0)
			ft_rotate_a(stack_a);
		else
		{
			ft_swap_a(stack_a);
			ft_rotate_a(stack_a);
		}
	}
}
