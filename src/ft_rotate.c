/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:29:26 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/28 14:38:16 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_list **list)
{
	t_list	*first_element;

	if (!list[0])
		return ;
	if (ft_lstsize(list[0]) < 2)
		return ;
	first_element = list[0];
	list[0] = list[0]->next;
	first_element->next = NULL;
	ft_lstadd_back(&list[0], first_element);
}

void	ft_rotate_a(t_list **list_a)
{
	ft_rotate(list_a);
	ft_printf("ra");
}

void	ft_rotate_b(t_list **list_b)
{
	ft_rotate(list_b);
	ft_printf("rb");
}

void	ft_rotate_rr(t_list **list_a, t_list **list_b)
{
	ft_rotate_a(list_a);
	ft_rotate_b(list_b);
	ft_printf("rr");
}
