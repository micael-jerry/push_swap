/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:00:21 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/28 14:34:08 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_detach_last_el(t_list *list)
{
	int	i;
	int	size;

	i = 1;
	size = ft_lstsize(list);
	while (i < size - 1)
	{
		i++;
		list = list->next;
	}
	list->next = NULL;
}

static void	ft_reverse_rotate(t_list **list)
{
	t_list	*last_element;

	if (!list[0])
		return ;
	if (ft_lstsize(list[0]) < 2)
		return ;
	last_element = ft_lstlast(list[0]);
	ft_detach_last_el(list[0]);
	ft_lstadd_front(list, last_element);
}

void	ft_reverse_rotate_a(t_list **list_a)
{
	ft_reverse_rotate(list_a);
	ft_printf("ra\n");
}

void	ft_reverse_rotate_b(t_list **list_b)
{
	ft_reverse_rotate(list_b);
	ft_printf("rb\n");
}

void	ft_reverse_rotate_rr(t_list **list_a, t_list **list_b)
{
	ft_reverse_rotate_a(list_a);
	ft_reverse_rotate_b(list_b);
	ft_printf("rr\n");
}
