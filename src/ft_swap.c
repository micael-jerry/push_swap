/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 06:19:02 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/11 15:38:58 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_PART_ONE_H
# define INSTRUCTIONS_PART_ONE_H

# include "push_swap.h"

static void	ft_swap(t_list_int **list)
{
	t_list_int	*tmp_0;
	t_list_int	*tmp_1;
	t_list_int	*tmp_2;

	if (ft_lstintsize(list[0]) < 2)
		return ;
	tmp_0 = list[0];
	tmp_1 = list[0]->next;
	tmp_2 = list[0]->next->next;
	list[0] = tmp_1;
	tmp_1->next = tmp_0;
	tmp_0->next = tmp_2;
}

void	ft_swap_a(t_list_int **list_a)
{
	ft_swap(list_a);
	ft_printf("sa\n");
}

void	ft_swap_b(t_list_int **list_b)
{
	ft_swap(list_b);
	ft_printf("sb\n");
}

void	ft_swap_ss(t_list_int **list_a, t_list_int **list_b)
{
	ft_swap(list_a);
	ft_swap(list_b);
	ft_printf("ss\n");
}

#endif
