/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_part_one.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 06:19:02 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/24 07:53:48 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_PART_ONE_H
# define INSTRUCTIONS_PART_ONE_H

# include "push_swap.h"

static void	ft_swap(t_list **list)
{
	t_list	*tmp_0;
	t_list	*tmp_1;
	t_list	*tmp_2;

	if (ft_lstsize(list[0]) < 2)
		return ;
	tmp_0 = list[0];
	tmp_1 = list[0]->next;
	tmp_2 = list[0]->next->next;
	list[0] = tmp_1;
	tmp_1->next = tmp_0;
	tmp_0->next = tmp_2;
}

void	ft_swap_a(t_list **list_a)
{
	ft_swap(list_a);
	ft_printf("sa\n");
}

void	ft_swap_b(t_list **list_b)
{
	ft_swap(list_b);
	ft_printf("sb\n");
}

void	ft_swap_ss(t_list **list_a, t_list **list_b)
{
	ft_swap(list_a);
	ft_swap(list_b);
	ft_printf("ss\n");
}

#endif
