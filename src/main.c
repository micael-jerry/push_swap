/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:13:47 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/07 06:56:28 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_int	*init_list_a(int argc, char const *argv[])
{
	t_list_int	*list_a;
	int		i;
	int		value;

	i = 1;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		ft_lstintadd_back(&list_a, ft_lstintnew(value));
		i++;
	}
	return (list_a);
}

int	main(int argc, char const *argv[])
{
	t_list_int	*list_a;
	t_list_int	*list_b;

	if (argc < 2)
		return (0);
	list_a = init_list_a(argc, argv);
	if (ft_is_sorted_list(&list_a))
		return (0);
	list_b = NULL;
	list_status(list_a, list_b);
	return (0);
}
