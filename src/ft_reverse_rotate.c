/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:00:21 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/07 06:33:56 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_detach_last_el(t_list_int *list)
{
	int	i;
	int	size;

	i = 1;
	size = ft_lstintsize(list);
	while (i < size - 1)
	{
		i++;
		list = list->next;
	}
	list->next = NULL;
}

static void	ft_reverse_rotate(t_list_int **list)
{
	t_list_int	*last_element;

	if (!list[0])
		return ;
	if (ft_lstintsize(list[0]) < 2)
		return ;
	last_element = ft_lstintlast(list[0]);
	ft_detach_last_el(list[0]);
	ft_lstintadd_front(list, last_element);
}

void	ft_reverse_rotate_a(t_list_int **list_a)
{
	ft_reverse_rotate(list_a);
	ft_printf("ra\n");
}

void	ft_reverse_rotate_b(t_list_int **list_b)
{
	ft_reverse_rotate(list_b);
	ft_printf("rb\n");
}

void	ft_reverse_rotate_rr(t_list_int **list_a, t_list_int **list_b)
{
	ft_reverse_rotate_a(list_a);
	ft_reverse_rotate_b(list_b);
	ft_printf("rr\n");
}
