/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:13:47 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/11 10:40:12 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_int	**init_list_a(char *argv[], int init_index)
{
	t_list_int **list_a;
	int		i;
	int		value;

	list_a = (t_list_int **) malloc(sizeof(t_list_int));
	*list_a = NULL;

	i = init_index;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		ft_lstintadd_back(list_a, ft_lstintnew(value));
		i++;
	}
	return (list_a);
}

int	main(int argc, char const *argv[])
{
	int	*argv_init_index;
	char **argv_value;
	t_list_int	**list_a;
	t_list_int	**list_b;

	if (argc < 2)
		return (-1);
	argv_init_index = (int *) malloc(sizeof(int));
	argv_value = ft_get_arg_val(argc, argv, argv_init_index);
	ft_params_validator(argv_value, *argv_init_index);

	list_a = init_list_a(argv_value, *argv_init_index);
	list_b = (t_list_int **) malloc(sizeof(t_list_int));
	*list_b = NULL;
	free(argv_init_index);

	if (ft_is_sorted(list_a))
		return (free_list(list_a), free_list(list_b), 0);

	list_status(list_a, list_b);
	return (0);
}
