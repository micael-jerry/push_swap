/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:29:26 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/28 13:55:03 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_list **list_a)
{
	t_list	*first_element_a;

	if (!list_a[0])
		return ;
	if (ft_lstsize(list_a[0]) < 2)
		return ;
	first_element_a = list_a[0];
	list_a[0] = list_a[0]->next;
	first_element_a->next = NULL;
	ft_lstadd_back(&list_a[0], first_element_a);
	ft_printf("ra");
}

void	ft_rotate_b(t_list **list_b)
{
	t_list	*first_element_b;

	if (!list_b[0])
		return ;
	if (ft_lstsize(list_b[0]) < 2)
		return ;
	first_element_b = list_b[0];
	list_b[0] = list_b[0]->next;
	first_element_b->next = NULL;
	ft_lstadd_back(&list_b[0], first_element_b);
	ft_printf("rb");
}

void	ft_rotate_rr(t_list **list_a, t_list **list_b)
{
	ft_rotate_a(list_a);
	ft_rotate_b(list_b);
	ft_printf("rr");
}
