/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_part_one.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 06:19:02 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/24 07:39:51 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_PART_ONE_H
# define INSTRUCTIONS_PART_ONE_H

# include "push_swap.h"

void	ft_swap(t_list **list, char *print_str)
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
	ft_printf("%s\n", print_str);
}

#endif
