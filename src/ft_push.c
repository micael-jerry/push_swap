/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:55:00 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/07 06:22:20 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_list_int **list_a, t_list_int **list_b)
{
	t_list_int	*first_element_b;

	if (!list_b[0])
		return ;
	first_element_b = list_b[0];
	list_b[0] = first_element_b->next;
	ft_lstintadd_front(list_a, first_element_b);
	ft_printf("pa");
}

void	ft_push_b(t_list_int **list_a, t_list_int **list_b)
{
	t_list_int	*first_element_a;

	if (!list_a[0])
		return ;
	first_element_a = list_a[0];
	list_a[0] = first_element_a->next;
	ft_lstintadd_front(list_b, first_element_a);
	ft_printf("pb");
}
