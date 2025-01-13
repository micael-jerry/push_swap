/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:13:47 by mfidimal          #+#    #+#             */
/*   Updated: 2025/01/12 21:09:04 by mfidimal         ###   ########.fr       */
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
	ft_listint_indexation(list_a);
	return (list_a);
}

void sort_stack(t_list_int **stack_a)
{
	int	stack_a_len;

	stack_a_len = ft_lstintsize(stack_a[0]);
	if (stack_a_len == 2)
		ft_sort_2(stack_a);
	if (stack_a_len == 3)
		ft_sort_3(stack_a);
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

	sort_stack(list_a);

	list_status(list_a, list_b);
	return (0);
}
