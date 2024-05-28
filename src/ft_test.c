/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 06:34:32 by mfidimal          #+#    #+#             */
/*   Updated: 2024/05/28 14:34:56 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *list)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = list;
	while (tmp)
	{
		ft_printf("%d: %d\n", i, *(int *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	ft_printf("\n");
}

void	list_status(t_list *list_a, t_list *list_b)
{
	ft_printf("List a:\n");
	print_list(list_a);
	ft_printf("List b:\n");
	print_list(list_b);
	ft_printf("\n================================\n");
}
