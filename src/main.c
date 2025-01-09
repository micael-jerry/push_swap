/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:13:47 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/09 18:17:16 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_int	**init_list_a(int argc, char const *argv[])
{
	t_list_int **list_a;
	int		i;
	int		value;

	list_a = (t_list_int **) malloc(sizeof(t_list_int));
	*list_a = NULL;

	i = 1;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		ft_lstintadd_back(list_a, ft_lstintnew(value));
		i++;
	}
	return (list_a);
}

int	main(int argc, char const *argv[])
{
	t_list_int	**list_a;
	t_list_int	**list_b;

	if (argc < 2)
		return (-1);
	ft_params_validator(argc, argv);
	list_a = init_list_a(argc, argv);
	list_b = (t_list_int **) malloc(sizeof(t_list_int));
	*list_b = NULL;

	if (ft_is_sorted(list_a))
		return (free_list(list_a), free_list(list_b), 0);

	list_status(list_a, list_b);
	return (0);
}
